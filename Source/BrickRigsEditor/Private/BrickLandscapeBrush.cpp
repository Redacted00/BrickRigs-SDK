// Fill out your copyright notice in the Description page of Project Settings.


#include "BrickLandscapeBrush.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Engine/Canvas.h"
#include "EngineUtils.h"
#include "InstancedFoliageActor.h"
//#include "Buildings/BrickBuilding.h"
#include "Landscape/Classes/Landscape.h"
#include "LandscapeDataAccess.h"
#include <BrickRigs/BrickBuilding.h>

ABrickLandscapeBrush::ABrickLandscapeBrush()
{
	AffectHeightmap = true;
	AffectWeightmap = true;
}

void ABrickLandscapeBrush::Initialize_Native(const FTransform& InLandscapeTransform, const FIntPoint& InLandscapeSize, const FIntPoint& InLandscapeRenderTargetSize)
{
	LandscapeTransform = InLandscapeTransform;
	LandscapeSize = InLandscapeSize;
	RenderTargetSize = InLandscapeRenderTargetSize;
}

UTextureRenderTarget2D* ABrickLandscapeBrush::Render_Native(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, const FName& InWeightmapLayerName)
{
	LayerName = InWeightmapLayerName;
	SourceRenderTarget = InCombinedResult;

	// Helper lambda to create a new render target
	auto CreateOrUpdateOutputRenderTarget = [&](UTextureRenderTarget2D* RenderTarget)
	{
		if (RenderTarget)
		{
			// Update the size if needed
			if (RenderTarget->SizeX != InCombinedResult->SizeX || RenderTarget->SizeY != InCombinedResult->SizeY)
			{
				// Update the size if needed
				RenderTarget->InitAutoFormat(InCombinedResult->SizeX, InCombinedResult->SizeY);
			}
		}
		else
		{
			RenderTarget = DuplicateObject<UTextureRenderTarget2D>(InCombinedResult, this, NAME_None);
		}

		// Draw the input result to the output result
		auto* Canvas = static_cast<UCanvas*>(nullptr);
		auto CanvasSize = FVector2D::ZeroVector;
		auto RenderContext = FDrawToRenderTargetContext();
		UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(this, RenderTarget, Canvas, CanvasSize, RenderContext);
		Canvas->K2_DrawTexture(InCombinedResult, FVector2D::ZeroVector, CanvasSize, FVector2D::ZeroVector, FVector2D(1.f, 1.f), FLinearColor::White, BLEND_Opaque);
		UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(this, RenderContext);

		return RenderTarget;
	};

	if (InIsHeightmap)
	{
		// Create the heightmap render target if needed and assign it
		HeightmapRenderTarget = CreateOrUpdateOutputRenderTarget(HeightmapRenderTarget);
		OutputRenderTarget = HeightmapRenderTarget;

		// Render the heightmap
		RenderHeightmap();

		// Calculate the height range
		auto* Resource = HeightmapRenderTarget->GameThread_GetRenderTargetResource();
		if (Resource)
		{
			auto Pixels = TArray<FColor>();
			Resource->ReadPixels(Pixels);

			auto MinValue = MAX_uint16, MaxValue = static_cast<uint16>(0);
			for (auto PixelIdx = 0; PixelIdx < Pixels.Num(); ++PixelIdx)
			{
				const auto Color = Pixels[PixelIdx];
				const auto Value = static_cast<uint16>(Color.R * 256 + Color.G);
				MinValue = FMath::Min(MinValue, Value);
				MaxValue = FMath::Max(MaxValue, Value);
			}

			// Convert to world units
			const auto HeightScale = LANDSCAPE_ZSCALE * LandscapeTransform.GetScale3D().Z;
			const auto HeightOffset = LandscapeTransform.GetLocation().Z;
			LandscapeHeightRange.Min = (MinValue - 32768.f) * HeightScale + HeightOffset;
			LandscapeHeightRange.Max = (MaxValue - 32768.f) * HeightScale + HeightOffset;
		}
	}
	else
	{
		// Get or create the render target
		WeightmapRenderTargets.SetNumZeroed(AffectedWeightmapLayers.Num());
		const auto WeightmapIdx = AffectedWeightmapLayers.Find(LayerName);
		if (WeightmapIdx != INDEX_NONE)
		{
			// Create the weightmap render target if needed and assign it
			WeightmapRenderTargets[WeightmapIdx] = CreateOrUpdateOutputRenderTarget(WeightmapRenderTargets[WeightmapIdx]);
			OutputRenderTarget = WeightmapRenderTargets[WeightmapIdx];

			// Render the weightmap
			RenderWeightmap(LayerName);
		}
	}

	return OutputRenderTarget.Get();
}

UMaterialInstanceDynamic* ABrickLandscapeBrush::CreateMID(UMaterialInterface* Material)
{
	auto* MID = UMaterialInstanceDynamic::Create(Material, this);
	if (MID)
	{
		const auto bIsHeightmap = LayerName.IsNone();
		// Assign the currently rendered texture
		MID->SetTextureParameterValue(bIsHeightmap ? "Heightmap" : "Weightmap", SourceRenderTarget.Get());

		// Assign the landscape transform
		MID->SetVectorParameterValue("LandscapeLocation", LandscapeTransform.GetLocation());
		MID->SetVectorParameterValue("LandscapeScale", LandscapeTransform.GetScale3D());
		// Assign the render params
		const auto RenderParams = FLinearColor(LandscapeSize.X, LandscapeSize.Y, RenderTargetSize.X, RenderTargetSize.Y);
		MID->SetVectorParameterValue("RenderParams", RenderParams);

		// Assign the heightmap texture
		if (!bIsHeightmap)
		{
			// Assign the min and max height
			const auto HeightParams = FLinearColor(LandscapeHeightRange.Min, LandscapeHeightRange.Max, 0.f, 0.f);
			MID->SetVectorParameterValue("LandscapeHeight", HeightParams);

			// Assign the heightmap texture
			MID->SetTextureParameterValue("Heightmap", HeightmapRenderTarget);

			// Assign the cached render targets
			const auto WeightmapIdx = AffectedWeightmapLayers.Find(LayerName);
			for (auto i = 0; i < WeightmapIdx; ++i)
			{
				MID->SetTextureParameterValue(AffectedWeightmapLayers[i], WeightmapRenderTargets[i]);
			}
		}
	}

	return MID;
}

void ABrickLandscapeBrush::DrawMaterial(UMaterialInterface* Material)
{
	if (OutputRenderTarget.IsValid())
	{
		UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, OutputRenderTarget.Get(), Material);
	}
}

void ABrickLandscapeBrush::DrawBuildings()
{
	// Create the canvas for drawing
	auto* Canvas = static_cast<UCanvas*>(nullptr);
	auto CanvasSize = FVector2D::ZeroVector;
	auto RenderContext = FDrawToRenderTargetContext();
	UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(this, OutputRenderTarget.Get(), Canvas, CanvasSize, RenderContext);

	for (auto It = TActorIterator<ABrickBuilding>(GetWorld()); It; ++It)
	{
		const auto* Building = *It;
		if (Building && Building->LandscapeLayerName == LayerName)
		{
			const auto BuildingTM = Building->GetActorTransform();
			// Get the building bounds as an approximation for its footprint
			auto BoundsOrigin = FVector::ZeroVector, BoundsExtent = FVector::ZeroVector;
			Building->GetBuildingLocalBounds(BoundsOrigin, BoundsExtent);

			// Convert to canvas space
			auto Size = SizeToCanvasSpace(FVector2D(BoundsExtent) * 2.f + Building->LandscapeLayerInflation);
			const auto Position = LocationToCanvasSpace(BuildingTM.TransformPosition(BoundsOrigin)) - Size * 0.5f;
			const auto Rotation = RotationToCanvasSpace(BuildingTM.GetRotation());

			// Round the coordinates so the rect is rather too big than too small
			Size.X = FMath::CeilToFloat(Size.X);
			Size.Y = FMath::CeilToFloat(Size.Y);

			// Draw the rectangle
			Canvas->K2_DrawTexture(nullptr, Position, Size, FVector2D::ZeroVector, FVector2D::UnitVector, FLinearColor::White, BLEND_Additive, Rotation);
		}
	}
	
	// Stop the drawing
	UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(this, RenderContext);
}

/*void ABrickLandscapeBrush::DrawFoliage(const TArray<UFoliageType*>& FoliageTypes, UTexture* Texture, float Scale)
{
	// Create the canvas for drawing
	auto* Canvas = static_cast<UCanvas*>(nullptr);
	auto CanvasSize = FVector2D::ZeroVector;
	auto RenderContext = FDrawToRenderTargetContext();
	UKismetRenderingLibrary::BeginDrawCanvasToRenderTarget(this, OutputRenderTarget.Get(), Canvas, CanvasSize, RenderContext);

	if (Canvas)
	{
		// Iterate all foliage actors
		for (auto It = TActorIterator<AInstancedFoliageActor>(GetWorld()); It; ++It)
		{
			const auto* FoliageActor = *It;
			if (FoliageActor)
			{
				for (auto* FoliageType : FoliageTypes)
				{
					const auto* FoliageInfo = FoliageActor->FindInfo(FoliageType);
					if (FoliageInfo)
					{
						// Use the bounds to approximate the foliage radius
						FoliageType->UpdateBounds();
						const auto BoundsSize = FoliageType->MeshBounds.BoxExtent;
						const auto MeshSize = FMath::Max(BoundsSize.X, BoundsSize.Y) * 2.f;

						for (const auto& Instance : FoliageInfo->Instances)
						{
							const auto InstanceTM = Instance.GetInstanceWorldTransform();

							// Convert to canvas space
							const auto Size = SizeToCanvasSpace(FVector2D(MeshSize * Scale * FVector2D(InstanceTM.GetScale3D()).GetMax()));
							const auto Position = LocationToCanvasSpace(InstanceTM.GetLocation()) - Size * 0.5f;
							// Use a random rotation for a bit of variation
							const auto Rotation = FMath::FRandRange(-180.f, 180.f);
							Canvas->K2_DrawTexture(Texture, Position, Size, FVector2D::ZeroVector, FVector2D::UnitVector, FLinearColor::White, BLEND_Additive, Rotation);
						}
					}
				}
			}
		}
	}

	// Stop the drawing
	UKismetRenderingLibrary::EndDrawCanvasToRenderTarget(this, RenderContext);
}*/


