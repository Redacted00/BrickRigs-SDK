#include "NiagaraSystemScalabilitySettings.h"

FNiagaraSystemScalabilitySettings::FNiagaraSystemScalabilitySettings() {
    this->bCullByDistance = false;
    this->bCullMaxInstanceCount = false;
    this->bCullPerSystemMaxInstanceCount = false;
    this->bCullByMaxTimeWithoutRender = false;
    this->bCullByGlobalBudget = false;
    this->MaxDistance = 0.00f;
    this->MaxInstances = 0;
    this->MaxSystemInstances = 0;
    this->MaxTimeWithoutRender = 0.00f;
    this->MaxGlobalBudgetUsage = 0.00f;
}

