#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraVariableInfo.generated.h"

class UNiagaraDataInterface;

USTRUCT(BlueprintType)
struct FNiagaraVariableInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVariable Variable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraDataInterface* DataInterface;
    
    NIAGARA_API FNiagaraVariableInfo();
};

