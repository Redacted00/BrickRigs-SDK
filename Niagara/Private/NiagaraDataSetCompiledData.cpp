#include "NiagaraDataSetCompiledData.h"

FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData() {
    this->TotalFloatComponents = 0;
    this->TotalInt32Components = 0;
    this->TotalHalfComponents = 0;
    this->bRequiresPersistentIDs = false;
    this->SimTarget = ENiagaraSimTarget::CPUSim;
}

