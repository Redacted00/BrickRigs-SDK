#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraParameterDefinitionsBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UNiagaraParameterDefinitionsBase : public UObject {
    GENERATED_BODY()
public:
    UNiagaraParameterDefinitionsBase();
};

