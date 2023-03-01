#include "LandmassFalloffSettings.h"

FLandmassFalloffSettings::FLandmassFalloffSettings() {
    this->FalloffMode = EBrushFalloffMode::Angle;
    this->FalloffAngle = 0.00f;
    this->FalloffWidth = 0.00f;
    this->EdgeOffset = 0.00f;
    this->ZOffset = 0.00f;
}

