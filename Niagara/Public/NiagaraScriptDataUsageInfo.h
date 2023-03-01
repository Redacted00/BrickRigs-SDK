#pragma once
#include "CoreMinimal.h"
#include "NiagaraScriptDataUsageInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraScriptDataUsageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadsAttributeData;
    
    NIAGARA_API FNiagaraScriptDataUsageInfo();
};

