#include "NiagaraScalabilityState.h"

FNiagaraScalabilityState::FNiagaraScalabilityState() {
    this->Significance = 0.00f;
    this->bCulled = false;
    this->bPreviousCulled = false;
    this->bCulledByDistance = false;
    this->bCulledByInstanceCount = false;
    this->bCulledByVisibility = false;
    this->bCulledByGlobalBudget = false;
}

