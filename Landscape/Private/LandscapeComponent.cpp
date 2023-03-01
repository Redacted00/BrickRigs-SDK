#include "LandscapeComponent.h"
#include "LandscapeLODStreamingProxy.h"

class ULandscapeLayerInfoObject;
class UMaterialInstanceDynamic;

UMaterialInstanceDynamic* ULandscapeComponent::GetMaterialInstanceDynamic(int32 InIndex) const {
    return NULL;
}

float ULandscapeComponent::EditorGetPaintLayerWeightByNameAtLocation(const FVector& InLocation, const FName InPaintLayerName) {
    return 0.0f;
}

float ULandscapeComponent::EditorGetPaintLayerWeightAtLocation(const FVector& InLocation, ULandscapeLayerInfoObject* PaintLayer) {
    return 0.0f;
}

ULandscapeComponent::ULandscapeComponent() {
    this->SectionBaseX = 0;
    this->SectionBaseY = 0;
    this->ComponentSizeQuads = 0;
    this->SubsectionSizeQuads = 0;
    this->NumSubsections = 0;
    this->OverrideMaterial = NULL;
    this->OverrideHoleMaterial = NULL;
    this->MaterialInstances.AddDefaulted(1);
    this->LODIndexToMaterialIndex.AddDefaulted(1);
    this->XYOffsetmapTexture = NULL;
    this->WeightmapSubsectionOffset = 0.00f;
    this->HeightmapTexture = NULL;
    this->LODStreamingProxy = CreateDefaultSubobject<ULandscapeLODStreamingProxy>(TEXT("LandscapeLODStreamingProxy"));
    this->CollisionMipLevel = 0;
    this->SimpleCollisionMipLevel = 0;
    this->NegativeZBoundsExtension = 0.00f;
    this->PositiveZBoundsExtension = 0.00f;
    this->StaticLightingResolution = 0.00f;
    this->ForcedLOD = -1;
    this->LODBias = 0;
    this->GIBakedBaseColorTexture = NULL;
    this->MobileBlendableLayerMask = 0;
    this->MobileMaterialInterface = NULL;
}

