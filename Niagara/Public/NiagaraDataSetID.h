#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDataSetType.h"
#include "NiagaraDataSetID.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDataSetID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraDataSetType Type;
    
    NIAGARA_API FNiagaraDataSetID();
};

