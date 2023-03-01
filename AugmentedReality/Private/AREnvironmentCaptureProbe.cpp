#include "AREnvironmentCaptureProbe.h"

class UAREnvironmentCaptureProbeTexture;

FVector UAREnvironmentCaptureProbe::GetExtent() const {
    return FVector{};
}

UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture() {
    return NULL;
}

UAREnvironmentCaptureProbe::UAREnvironmentCaptureProbe() {
    this->EnvironmentCaptureTexture = NULL;
}

