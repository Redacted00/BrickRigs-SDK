#include "NiagaraOutlinerEmitterInstanceData.h"

FNiagaraOutlinerEmitterInstanceData::FNiagaraOutlinerEmitterInstanceData() {
    this->SimTarget = ENiagaraSimTarget::CPUSim;
    this->ExecState = ENiagaraExecutionState::Active;
    this->NumParticles = 0;
}

