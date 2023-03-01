#include "AnimNotifyState_TimedNiagaraEffect.h"

class UFXSystemComponent;
class UMeshComponent;

UFXSystemComponent* UAnimNotifyState_TimedNiagaraEffect::GetSpawnedEffect(UMeshComponent* MeshComp) const {
    return NULL;
}

UAnimNotifyState_TimedNiagaraEffect::UAnimNotifyState_TimedNiagaraEffect() {
    this->Template = NULL;
    this->bDestroyAtEnd = false;
}

