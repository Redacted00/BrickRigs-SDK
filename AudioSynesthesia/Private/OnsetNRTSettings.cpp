#include "OnsetNRTSettings.h"

UOnsetNRTSettings::UOnsetNRTSettings() {
    this->bDownmixToMono = false;
    this->GranularityInSeconds = 0.01f;
    this->Sensitivity = 0.50f;
    this->MinimumFrequency = 20.00f;
    this->MaximumFrequency = 16000.00f;
}

