#include "GerstnerWaterWaveGeneratorSimple.h"

UGerstnerWaterWaveGeneratorSimple::UGerstnerWaterWaveGeneratorSimple() {
    this->NumWaves = 16;
    this->Seed = 0;
    this->Randomness = 0.00f;
    this->MinWavelength = 521.00f;
    this->MaxWavelength = 6000.00f;
    this->WavelengthFalloff = 2.00f;
    this->MinAmplitude = 4.00f;
    this->MaxAmplitude = 80.00f;
    this->AmplitudeFalloff = 2.00f;
    this->WindAngleDeg = 0.00f;
    this->DirectionAngularSpreadDeg = 1325.00f;
    this->SmallWaveSteepness = 0.40f;
    this->LargeWaveSteepness = 0.20f;
    this->SteepnessFalloff = 1.00f;
}

