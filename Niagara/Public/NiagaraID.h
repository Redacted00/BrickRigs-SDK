#pragma once
#include "CoreMinimal.h"
#include "NiagaraID.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AcquireTag;
    
    NIAGARA_API FNiagaraID();
};

