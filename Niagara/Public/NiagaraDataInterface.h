#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraCore -ObjectName=NiagaraDataInterfaceBase -FallbackName=NiagaraDataInterfaceBase
#include "NiagaraDataInterface.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class NIAGARA_API UNiagaraDataInterface : public UNiagaraDataInterfaceBase {
    GENERATED_BODY()
public:
    UNiagaraDataInterface();
};

