// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LandscapeBlueprintBrushBase.h"
#include "BrickLandscapeBrush.generated.h"
class UMaterialInstanceDynamic;
/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class BRICKRIGSEDITOR_API ABrickLandscapeBrush : public ALandscapeBlueprintBrushBase
{
	GENERATED_BODY()
		// ~Variables
	// The layer currently being rendered
		FName LayerName;
	// Weightmap or heightmap render target
	TWeakObjectPtr<UTextureRenderTarget2D> SourceRenderTarget;
	// Render target currently being used for the output result
	TWeakObjectPtr<UTextureRenderTarget2D> OutputRenderTarget;
	// Heightmap output render target
	UPROPERTY(Transient, VisibleAnywhere)
		UTextureRenderTarget2D* HeightmapRenderTarget;
	// Weightmap output render targets
	UPROPERTY(Transient, VisibleAnywhere)
		TArray<UTextureRenderTarget2D*> WeightmapRenderTargets;
	// Saved landscape parameters
	FTransform LandscapeTransform;
	FIntPoint LandscapeSize;
	FIntPoint RenderTargetSize;
	// Min and max height of the landscape
	FFloatInterval LandscapeHeightRange;
	// ~Variables

public:
	// ~Constructor
	ABrickLandscapeBrush();

	// ~Super Interface
	virtual void Initialize_Native(const FTransform& InLandscapeTransform, const FIntPoint& InLandscapeSize, const FIntPoint& InLandscapeRenderTargetSize) override;
	virtual UTextureRenderTarget2D* Render_Native(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, const FName& InWeightmapLayerName) override;
	// ~Super Interface

	// Implement this instead of Render!
	UFUNCTION(BlueprintImplementableEvent)
		void RenderHeightmap();
	// Implement this instead of Render!
	UFUNCTION(BlueprintImplementableEvent)
		void RenderWeightmap(const FName& InLayerName);

	// Returns the render target currently being worked on
	UFUNCTION(BlueprintPure)
		UTextureRenderTarget2D* GetOutputRenderTarget() const
	{
		return OutputRenderTarget.Get();
	}

	// Returns the cached render target for the given layer
	UFUNCTION(BlueprintPure)
		UTextureRenderTarget2D* GetWeightmap(FName InLayerName) const
	{
		const auto WeightmapIdx = AffectedWeightmapLayers.Find(InLayerName);
		return WeightmapRenderTargets.IsValidIndex(WeightmapIdx) ? WeightmapRenderTargets[WeightmapIdx] : nullptr;
	}

	// Instantiates a material instance with the basic landscape parameters
	UFUNCTION(BlueprintCallable)
		UMaterialInstanceDynamic* CreateMID(UMaterialInterface* Material);
	// Draws the given material to the current render target
	UFUNCTION(BlueprintCallable)
		void DrawMaterial(UMaterialInterface* Material);
	UFUNCTION(BlueprintCallable)
		void DrawBuildings();
	// Draws a rectangle around all buildings
	/*UFUNCTION(BlueprintCallable)
		void DrawBuildings();*/
	// Draws a smooth circle around all foliage instances with the given meshes
	/*UFUNCTION(BlueprintCallable)
		void DrawFoliage(const TArray<UFoliageType*>& FoliageTypes, UTexture* Texture, float Scale = 1.f);
		*/
	// Converts a world space location to canvas space
	UFUNCTION(BlueprintPure)
		FVector2D LocationToCanvasSpace(const FVector& InLocation) const
	{
		return FVector2D(LandscapeTransform.InverseTransformPosition(InLocation));
	}

	// Converts a world space rotation to canvas space
	UFUNCTION(BlueprintPure)
		float RotationToCanvasSpace(const FQuat& InRotation) const
	{
		return (LandscapeTransform.GetRotation().Inverse() * InRotation).Rotator().Yaw;
	}

	// Converts a world space size to canvas space
	// NOTE: This only works with uniformally scaled landscapes
	UFUNCTION(BlueprintPure)
		FVector2D SizeToCanvasSpace(const FVector2D& InSize) const
	{
		return InSize / LandscapeTransform.GetScale3D().X;
	}
};
