#include "UnderwaterPostProcessSettings.h"

FUnderwaterPostProcessSettings::FUnderwaterPostProcessSettings() {
    this->bEnabled = false;
    this->Priority = 0.00f;
    this->BlendRadius = 0.00f;
    this->BlendWeight = 0.00f;
    this->UnderwaterPostProcessMaterial = NULL;
}

