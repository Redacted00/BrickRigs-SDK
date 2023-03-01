#include "NiagaraBaselineController.h"

class UNiagaraSystem;

bool UNiagaraBaselineController::OnTickTest_Implementation() {
    return false;
}

void UNiagaraBaselineController::OnOwnerTick_Implementation(float DeltaTime) {
}

void UNiagaraBaselineController::OnEndTest_Implementation(FNiagaraPerfBaselineStats Stats) {
}

void UNiagaraBaselineController::OnBeginTest_Implementation() {
}

UNiagaraSystem* UNiagaraBaselineController::GetSystem() {
    return NULL;
}

UNiagaraBaselineController::UNiagaraBaselineController() {
    this->TestDuration = 5.00f;
    this->EffectType = NULL;
    this->Owner = NULL;
}

