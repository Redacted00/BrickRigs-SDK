#pragma once
#include "CoreMinimal.h"
#include "NiagaraOutlinerWorldData.h"
#include "NiagaraOutlinerData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraOutlinerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FNiagaraOutlinerWorldData> WorldData;
    
    NIAGARA_API FNiagaraOutlinerData();
};

