#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceSimpleCounter.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UNiagaraDataInterfaceSimpleCounter();
};

