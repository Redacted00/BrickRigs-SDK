#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "NiagaraWorldManagerTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraWorldManagerTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    NIAGARA_API FNiagaraWorldManagerTickFunction();
};

template<>
struct TStructOpsTypeTraits<FNiagaraWorldManagerTickFunction> : public TStructOpsTypeTraitsBase2<FNiagaraWorldManagerTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

