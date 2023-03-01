#pragma once
#include "CoreMinimal.h"
#include "ENCPoolMethod.h"
#include "ENiagaraExecutionState.h"
#include "NiagaraOutlinerEmitterInstanceData.h"
#include "NiagaraOutlinerTimingData.h"
#include "NiagaraScalabilityState.h"
#include "NiagaraOutlinerSystemInstanceData.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraOutlinerSystemInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraOutlinerEmitterInstanceData> Emitters;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraExecutionState ActualExecutionState;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraExecutionState RequestedExecutionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraScalabilityState ScalabilityState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPendingKill: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENCPoolMethod PoolMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerTimingData AverageTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerTimingData MaxTime;
    
    FNiagaraOutlinerSystemInstanceData();
};

