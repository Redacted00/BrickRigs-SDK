#include "SubmixEffectDynamicsProcessorSettings.h"

FSubmixEffectDynamicsProcessorSettings::FSubmixEffectDynamicsProcessorSettings() {
    this->DynamicsProcessorType = ESubmixEffectDynamicsProcessorType::Compressor;
    this->PeakMode = ESubmixEffectDynamicsPeakMode::MeanSquared;
    this->LinkMode = ESubmixEffectDynamicsChannelLinkMode::Disabled;
    this->InputGainDb = 0.00f;
    this->ThresholdDb = 0.00f;
    this->Ratio = 0.00f;
    this->KneeBandwidthDb = 0.00f;
    this->LookAheadMsec = 0.00f;
    this->AttackTimeMsec = 0.00f;
    this->ReleaseTimeMsec = 0.00f;
    this->KeySource = ESubmixEffectDynamicsKeySource::Default;
    this->ExternalAudioBus = NULL;
    this->ExternalSubmix = NULL;
    this->bChannelLinked = false;
    this->bAnalogMode = false;
    this->bBypass = false;
    this->bKeyAudition = false;
    this->KeyGainDb = 0.00f;
    this->OutputGainDb = 0.00f;
}

