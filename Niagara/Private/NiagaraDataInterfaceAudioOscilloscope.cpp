#include "NiagaraDataInterfaceAudioOscilloscope.h"

UNiagaraDataInterfaceAudioOscilloscope::UNiagaraDataInterfaceAudioOscilloscope() {
    this->Submix = NULL;
    this->Resolution = 512;
    this->ScopeInMilliseconds = 20.00f;
}

