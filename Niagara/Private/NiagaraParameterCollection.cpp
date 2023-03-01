#include "NiagaraParameterCollection.h"
#include "NiagaraParameterCollectionInstance.h"

UNiagaraParameterCollection::UNiagaraParameterCollection() {
    this->Namespace = TEXT("Default__NiagaraParameterCollection");
    this->SourceMaterialCollection = NULL;
    this->DefaultInstance = CreateDefaultSubobject<UNiagaraParameterCollectionInstance>(TEXT("Default Instance"));
}

