#include "LandscapeBlueprintBrushBase.h"

class UTextureRenderTarget2D;

void ALandscapeBlueprintBrushBase::RequestLandscapeUpdate() {
}

UTextureRenderTarget2D* ALandscapeBlueprintBrushBase::Render_Implementation(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, const FName& InWeightmapLayerName) {
    return NULL;
}

void ALandscapeBlueprintBrushBase::Initialize_Implementation(const FTransform& InLandscapeTransform, const FIntPoint& InLandscapeSize, const FIntPoint& InLandscapeRenderTargetSize) {
}


ALandscapeBlueprintBrushBase::ALandscapeBlueprintBrushBase() {
}

