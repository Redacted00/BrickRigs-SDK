#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraCompilerTag.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraCompilerTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariable Variable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringValue;
    
    FNiagaraCompilerTag();
};

