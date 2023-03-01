#pragma once
#include "CoreMinimal.h"
#include "NiagaraOutlinerTimingData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraOutlinerTimingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameThread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RenderThread;
    
    NIAGARA_API FNiagaraOutlinerTimingData();
};

