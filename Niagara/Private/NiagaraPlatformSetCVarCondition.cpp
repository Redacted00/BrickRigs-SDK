#include "NiagaraPlatformSetCVarCondition.h"

FNiagaraPlatformSetCVarCondition::FNiagaraPlatformSetCVarCondition() {
    this->Value = false;
    this->MinInt = 0;
    this->MaxInt = 0;
    this->MinFloat = 0.00f;
    this->MaxFloat = 0.00f;
    this->bUseMinInt = false;
    this->bUseMaxInt = false;
    this->bUseMinFloat = false;
    this->bUseMaxFloat = false;
}

