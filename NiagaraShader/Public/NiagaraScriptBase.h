#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraScriptBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UNiagaraScriptBase : public UObject {
    GENERATED_BODY()
public:
    UNiagaraScriptBase();
};

