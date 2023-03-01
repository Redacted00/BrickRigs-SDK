#include "NiagaraVMExecutableData.h"

FNiagaraVMExecutableData::FNiagaraVMExecutableData() {
    this->NumTempRegisters = 0;
    this->NumUserPtrs = 0;
    this->LastCompileStatus = ENiagaraScriptCompileStatus::NCS_Unknown;
    this->bReadsSignificanceIndex = false;
    this->bNeedsGPUContextInit = false;
}

