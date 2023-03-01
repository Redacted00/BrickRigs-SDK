#include "NiagaraFunctionSignature.h"

FNiagaraFunctionSignature::FNiagaraFunctionSignature() {
    this->bRequiresContext = false;
    this->bRequiresExecPin = false;
    this->bMemberFunction = false;
    this->bExperimental = false;
    this->bSupportsCPU = false;
    this->bSupportsGPU = false;
    this->bWriteFunction = false;
    this->bSoftDeprecatedFunction = false;
    this->bIsCompileTagGenerator = false;
    this->bHidden = false;
    this->ModuleUsageBitmask = 0;
    this->ContextStageMinIndex = 0;
    this->ContextStageMaxIndex = 0;
}

