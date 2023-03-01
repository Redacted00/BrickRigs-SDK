#include "WaterCurveSettings.h"

FWaterCurveSettings::FWaterCurveSettings() {
    this->bUseCurveChannel = false;
    this->ElevationCurveAsset = NULL;
    this->ChannelEdgeOffset = 0.00f;
    this->ChannelDepth = 0.00f;
    this->CurveRampWidth = 0.00f;
}

