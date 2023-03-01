#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataSetID.h"
#include "NiagaraVariable.h"
#include "NiagaraDataSetProperties.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDataSetProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDataSetID ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariable> Variables;
    
    NIAGARA_API FNiagaraDataSetProperties();
};

