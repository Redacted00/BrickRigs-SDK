#include "NiagaraActor.h"
#include "NiagaraComponent.h"

void ANiagaraActor::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish) {
}

void ANiagaraActor::OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent) {
}

ANiagaraActor::ANiagaraActor() {
    this->NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent0"));
    this->bDestroyOnSystemFinish = false;
}

