#include "AudioImpulseResponse.h"

UAudioImpulseResponse::UAudioImpulseResponse() {
    this->NumChannels = 0;
    this->SampleRate = 0;
    this->NormalizationVolumeDb = -24.00f;
    this->bTrueStereo = false;
}

