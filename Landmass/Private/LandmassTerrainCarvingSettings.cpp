#include "LandmassTerrainCarvingSettings.h"

FLandmassTerrainCarvingSettings::FLandmassTerrainCarvingSettings() {
    this->BlendMode = EBrushBlendType::AlphaBlend;
    this->bInvertShape = false;
    this->Priority = 0;
}

