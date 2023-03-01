#pragma once
#include "CoreMinimal.h"
#include "NiagaraInt32.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraInt32 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    NIAGARA_API FNiagaraInt32();
};

