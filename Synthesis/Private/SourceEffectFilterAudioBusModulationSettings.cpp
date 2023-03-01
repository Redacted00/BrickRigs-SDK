#include "SourceEffectFilterAudioBusModulationSettings.h"

FSourceEffectFilterAudioBusModulationSettings::FSourceEffectFilterAudioBusModulationSettings() {
    this->AudioBus = NULL;
    this->EnvelopeFollowerAttackTimeMsec = 0;
    this->EnvelopeFollowerReleaseTimeMsec = 0;
    this->EnvelopeGainMultiplier = 0.00f;
    this->FilterParam = ESourceEffectFilterParam::FilterFrequency;
    this->MinFrequencyModulation = 0.00f;
    this->MaxFrequencyModulation = 0.00f;
    this->MinResonanceModulation = 0.00f;
    this->MaxResonanceModulation = 0.00f;
}

