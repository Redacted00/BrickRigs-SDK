#include "NiagaraVariant.h"

FNiagaraVariant::FNiagaraVariant() {
    this->Object = NULL;
    this->DataInterface = NULL;
    this->CurrentMode = ENiagaraVariantMode::None;
}

