#pragma once
#include "CoreMinimal.h"
#include "NiagaraInputConditionMetadata.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraInputConditionMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TargetValues;
    
    FNiagaraInputConditionMetadata();
};

