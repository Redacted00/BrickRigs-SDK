#pragma once
#include "CoreMinimal.h"
#include "NiagaraPerfBaselineStats.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraPerfBaselineStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerInstanceAvg_GT;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerInstanceAvg_RT;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerInstanceMax_GT;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerInstanceMax_RT;
    
    FNiagaraPerfBaselineStats();
};

