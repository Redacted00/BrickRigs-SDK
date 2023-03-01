#include "NiagaraEffectType.h"

UNiagaraEffectType::UNiagaraEffectType() {
    this->UpdateFrequency = ENiagaraScalabilityUpdateFrequency::SpawnOnly;
    this->CullReaction = ENiagaraCullReaction::DeactivateImmediate;
    this->SignificanceHandler = NULL;
    this->PerformanceBaselineController = NULL;
}

