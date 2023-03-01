#include "NiagaraOutlinerSystemInstanceData.h"

FNiagaraOutlinerSystemInstanceData::FNiagaraOutlinerSystemInstanceData() {
    this->ActualExecutionState = ENiagaraExecutionState::Active;
    this->RequestedExecutionState = ENiagaraExecutionState::Active;
    this->bPendingKill = false;
    this->PoolMethod = ENCPoolMethod::None;
}

