#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraMergeable.generated.h"

UCLASS(Blueprintable)
class NIAGARACORE_API UNiagaraMergeable : public UObject {
    GENERATED_BODY()
public:
    UNiagaraMergeable();
};

