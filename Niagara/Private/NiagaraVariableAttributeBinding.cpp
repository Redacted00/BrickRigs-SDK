#include "NiagaraVariableAttributeBinding.h"

FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding() {
    this->BindingSourceMode = ImplicitFromSource;
    this->bBindingExistsOnSource = false;
    this->bIsCachedParticleValue = false;
}

