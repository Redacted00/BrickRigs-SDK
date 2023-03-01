#include "NiagaraDataInterfaceAudioSpectrum.h"

UNiagaraDataInterfaceAudioSpectrum::UNiagaraDataInterfaceAudioSpectrum() {
    this->Resolution = 512;
    this->MinimumFrequency = 55.00f;
    this->MaximumFrequency = 10000.00f;
    this->NoiseFloorDb = -60.00f;
}

