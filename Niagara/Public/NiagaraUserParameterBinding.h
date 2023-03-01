#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraUserParameterBinding.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraUserParameterBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariable Parameter;
    
    FNiagaraUserParameterBinding();
};

