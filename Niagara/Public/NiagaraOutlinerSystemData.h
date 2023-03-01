#pragma once
#include "CoreMinimal.h"
#include "NiagaraOutlinerSystemInstanceData.h"
#include "NiagaraOutlinerTimingData.h"
#include "NiagaraOutlinerSystemData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraOutlinerSystemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraOutlinerSystemInstanceData> SystemInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerTimingData AveragePerFrameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerTimingData MaxPerFrameTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerTimingData AveragePerInstanceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerTimingData MaxPerInstanceTime;
    
    NIAGARA_API FNiagaraOutlinerSystemData();
};

