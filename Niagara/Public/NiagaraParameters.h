#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraParameters.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariable> Parameters;
    
    NIAGARA_API FNiagaraParameters();
};

