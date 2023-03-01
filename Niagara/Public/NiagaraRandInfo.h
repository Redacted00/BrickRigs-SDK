#pragma once
#include "CoreMinimal.h"
#include "NiagaraRandInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraRandInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed3;
    
    NIAGARA_API FNiagaraRandInfo();
};

