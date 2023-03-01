#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraVariableDataInterfaceBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraVariableDataInterfaceBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariable BoundVariable;
    
    NIAGARA_API FNiagaraVariableDataInterfaceBinding();
};

