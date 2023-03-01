#include "LoudnessNRTSettings.h"

ULoudnessNRTSettings::ULoudnessNRTSettings() {
    this->AnalysisPeriod = 0.01f;
    this->MinimumFrequency = 20.00f;
    this->MaximumFrequency = 20000.00f;
    this->CurveType = ELoudnessNRTCurveTypeEnum::D;
    this->NoiseFloorDb = -60.00f;
}

