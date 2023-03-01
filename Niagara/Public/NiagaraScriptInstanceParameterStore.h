#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterStore.h"
#include "NiagaraScriptInstanceParameterStore.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore {
    GENERATED_BODY()
public:
    NIAGARA_API FNiagaraScriptInstanceParameterStore();
};

