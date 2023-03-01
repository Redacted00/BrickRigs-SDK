#include "FOscillator.h"

FFOscillator::FFOscillator() {
    this->Amplitude = 0.00f;
    this->Frequency = 0.00f;
    this->InitialOffset = EOO_OffsetRandom;
    this->Waveform = EOscillatorWaveform::SineWave;
}

