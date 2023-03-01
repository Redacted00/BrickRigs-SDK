#include "WaterFalloffSettings.h"

FWaterFalloffSettings::FWaterFalloffSettings() {
    this->FalloffMode = EWaterBrushFalloffMode::Angle;
    this->FalloffAngle = 0.00f;
    this->FalloffWidth = 0.00f;
    this->EdgeOffset = 0.00f;
    this->ZOffset = 0.00f;
}

