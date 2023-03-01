#include "SubmixEffectStereoDelaySettings.h"

FSubmixEffectStereoDelaySettings::FSubmixEffectStereoDelaySettings() {
    this->DelayMode = EStereoDelaySourceEffect::Normal;
    this->DelayTimeMsec = 0.00f;
    this->Feedback = 0.00f;
    this->DelayRatio = 0.00f;
    this->WetLevel = 0.00f;
    this->DryLevel = 0.00f;
    this->bFilterEnabled = false;
    this->FilterType = EStereoDelayFiltertype::Lowpass;
    this->FilterFrequency = 0.00f;
    this->FilterQ = 0.00f;
}

