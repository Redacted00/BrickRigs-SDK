#include "SubmixEffectConvolutionReverbPreset.h"

class UAudioImpulseResponse;

void USubmixEffectConvolutionReverbPreset::SetSettings(const FSubmixEffectConvolutionReverbSettings& InSettings) {
}

void USubmixEffectConvolutionReverbPreset::SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse) {
}

USubmixEffectConvolutionReverbPreset::USubmixEffectConvolutionReverbPreset() {
    this->ImpulseResponse = NULL;
    this->BlockSize = ESubmixEffectConvolutionReverbBlockSize::BlockSize1024;
    this->bEnableHardwareAcceleration = true;
}

