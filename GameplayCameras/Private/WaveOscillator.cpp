#include "WaveOscillator.h"

FWaveOscillator::FWaveOscillator() {
    this->Amplitude = 0.00f;
    this->Frequency = 0.00f;
    this->InitialOffsetType = EInitialWaveOscillatorOffsetType::Random;
}

