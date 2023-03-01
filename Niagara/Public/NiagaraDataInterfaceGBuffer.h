#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceGBuffer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UNiagaraDataInterfaceGBuffer();
};

