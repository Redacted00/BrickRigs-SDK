#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraEditorParametersAdapterBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UNiagaraEditorParametersAdapterBase : public UObject {
    GENERATED_BODY()
public:
    UNiagaraEditorParametersAdapterBase();
};

