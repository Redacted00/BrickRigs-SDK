#pragma once
#include "CoreMinimal.h"
#include "NiagaraHalfVector2.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraHalfVector2 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 X;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Y;
    
    NIAGARA_API FNiagaraHalfVector2();
};

