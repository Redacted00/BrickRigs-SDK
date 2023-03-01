#include "LandscapeProxy.h"

class ULandscapeLayerInfoObject;
class UMaterialInterface;
class USplineComponent;
class UTexture;
class UTextureRenderTarget2D;

void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value) {
}

void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(FName ParameterName, UTexture* Value) {
}

void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value) {
}

bool ALandscapeProxy::LandscapeExportHeightmapToRenderTarget(UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies) {
    return false;
}

void ALandscapeProxy::EditorSetLandscapeMaterial(UMaterialInterface* NewLandscapeMaterial) {
}

void ALandscapeProxy::EditorApplySpline(USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32 NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, ULandscapeLayerInfoObject* PaintLayer, FName EditLayerName) {
}

void ALandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections) {
}

void ALandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff) {
}

void ALandscapeProxy::ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize) {
}

void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor) {
}

void ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections) {
}

ALandscapeProxy::ALandscapeProxy() {
    this->SplineComponent = NULL;
    this->MaxLODLevel = -1;
    this->LODDistanceFactor = 0.00f;
    this->LODFalloff = ELandscapeLODFalloff::Linear;
    this->ComponentScreenSizeToUseSubSections = 0.65f;
    this->LOD0ScreenSize = 0.50f;
    this->LOD0DistributionSetting = 1.25f;
    this->LODDistributionSetting = 3.00f;
    this->TessellationComponentScreenSize = 0.80f;
    this->UseTessellationComponentScreenSizeFalloff = true;
    this->TessellationComponentScreenSizeFalloff = 0.75f;
    this->OccluderGeometryLOD = 1;
    this->StaticLightingLOD = 0;
    this->DefaultPhysMaterial = NULL;
    this->StreamingDistanceMultiplier = 1.00f;
    this->LandscapeMaterial = NULL;
    this->LandscapeHoleMaterial = NULL;
    this->bMeshHoles = false;
    this->MeshHolesMaxLod = 6;
    this->VirtualTextureNumLods = 6;
    this->VirtualTextureLodBias = 0;
    this->VirtualTextureRenderPassType = ERuntimeVirtualTextureMainPassType::Always;
    this->NegativeZBoundsExtension = 0.00f;
    this->PositiveZBoundsExtension = 0.00f;
    this->bHasLandscapeGrass = true;
    this->StaticLightingResolution = 1.00f;
    this->CastShadow = true;
    this->bCastDynamicShadow = true;
    this->bCastStaticShadow = true;
    this->bCastFarShadow = true;
    this->bCastHiddenShadow = false;
    this->bCastShadowAsTwoSided = false;
    this->bAffectDistanceFieldLighting = true;
    this->bUseMaterialPositionOffsetInStaticLighting = false;
    this->bRenderCustomDepth = false;
    this->CustomDepthStencilWriteMask = ERendererStencilMask::ERSM_Default;
    this->CustomDepthStencilValue = 0;
    this->LDMaxDrawDistance = 0.00f;
    this->CollisionMipLevel = 0;
    this->SimpleCollisionMipLevel = 0;
    this->CollisionThickness = 100.00f;
    this->bGenerateOverlapEvents = false;
    this->bBakeMaterialPositionOffsetIntoCollision = false;
    this->ComponentSizeQuads = 0;
    this->SubsectionSizeQuads = 0;
    this->NumSubsections = 0;
    this->bUsedForNavigation = true;
    this->bFillCollisionUnderLandscapeForNavmesh = false;
    this->bUseDynamicMaterialInstance = false;
    this->NavigationGeometryGatheringMode = ENavDataGatheringMode::Default;
    this->bUseLandscapeForCullingInvisibleHLODVertices = false;
    this->bHasLayersContent = false;
}

