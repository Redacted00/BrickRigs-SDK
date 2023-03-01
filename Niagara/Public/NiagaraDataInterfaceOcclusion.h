#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceOcclusion.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UNiagaraDataInterfaceOcclusion();
};

