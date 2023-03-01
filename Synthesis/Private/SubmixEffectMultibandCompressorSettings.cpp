#include "SubmixEffectMultibandCompressorSettings.h"

FSubmixEffectMultibandCompressorSettings::FSubmixEffectMultibandCompressorSettings() {
    this->DynamicsProcessorType = ESubmixEffectDynamicsProcessorType::Compressor;
    this->PeakMode = ESubmixEffectDynamicsPeakMode::MeanSquared;
    this->LookAheadMsec = 0.00f;
    this->bLinkChannels = false;
    this->bAnalogMode = false;
    this->bFourPole = false;
}

