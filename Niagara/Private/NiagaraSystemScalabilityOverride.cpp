#include "NiagaraSystemScalabilityOverride.h"

FNiagaraSystemScalabilityOverride::FNiagaraSystemScalabilityOverride() {
    this->bOverrideDistanceSettings = false;
    this->bOverrideInstanceCountSettings = false;
    this->bOverridePerSystemInstanceCountSettings = false;
    this->bOverrideTimeSinceRendererSettings = false;
    this->bOverrideGlobalBudgetCullingSettings = false;
}

