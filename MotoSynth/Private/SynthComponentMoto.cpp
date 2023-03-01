#include "SynthComponentMoto.h"

void USynthComponentMoto::SetSettings(const FMotoSynthRuntimeSettings& InSettings) {
}

void USynthComponentMoto::SetRPM(float InRPM, float InTimeSec) {
}

bool USynthComponentMoto::IsEnabled() const {
    return false;
}

void USynthComponentMoto::GetRPMRange(float& OutMinRPM, float& OutMaxRPM) {
}

USynthComponentMoto::USynthComponentMoto() {
    this->MotoSynthPreset = NULL;
    this->RPM = 1000.00f;
}

