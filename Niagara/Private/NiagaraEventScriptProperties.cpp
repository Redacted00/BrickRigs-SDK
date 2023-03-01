#include "NiagaraEventScriptProperties.h"

FNiagaraEventScriptProperties::FNiagaraEventScriptProperties() {
    this->ExecutionMode = EScriptExecutionMode::EveryParticle;
    this->SpawnNumber = 0;
    this->MaxEventsPerFrame = 0;
    this->bRandomSpawnNumber = false;
    this->MinSpawnNumber = 0;
}

