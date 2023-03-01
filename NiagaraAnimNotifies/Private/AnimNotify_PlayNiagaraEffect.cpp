#include "AnimNotify_PlayNiagaraEffect.h"

class UFXSystemComponent;

UFXSystemComponent* UAnimNotify_PlayNiagaraEffect::GetSpawnedEffect() const {
    return NULL;
}

UAnimNotify_PlayNiagaraEffect::UAnimNotify_PlayNiagaraEffect() {
    this->Template = NULL;
    this->bAbsoluteScale = false;
    this->Attached = true;
}

