#include "NiagaraDataInterfaceAudioPlayer.h"

UNiagaraDataInterfaceAudioPlayer::UNiagaraDataInterfaceAudioPlayer() {
    this->SoundToPlay = NULL;
    this->Attenuation = NULL;
    this->Concurrency = NULL;
    this->bLimitPlaysPerTick = true;
    this->MaxPlaysPerTick = 10;
    this->bStopWhenComponentIsDestroyed = true;
}

