#include "NiagaraModuleDependency.h"

FNiagaraModuleDependency::FNiagaraModuleDependency() {
    this->Type = ENiagaraModuleDependencyType::PreDependency;
    this->ScriptConstraint = ENiagaraModuleDependencyScriptConstraint::SameScript;
}

