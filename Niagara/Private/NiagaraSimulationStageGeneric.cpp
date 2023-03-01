#include "NiagaraSimulationStageGeneric.h"

UNiagaraSimulationStageGeneric::UNiagaraSimulationStageGeneric() {
    this->IterationSource = ENiagaraIterationSource::Particles;
    this->Iterations = 1;
    this->bSpawnOnly = false;
    this->bDisablePartialParticleUpdate = false;
}

