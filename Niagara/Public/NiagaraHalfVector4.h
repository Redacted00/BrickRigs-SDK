#pragma once
#include "CoreMinimal.h"
#include "NiagaraHalfVector4.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraHalfVector4 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 X;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Y;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Z;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 W;
    
    NIAGARA_API FNiagaraHalfVector4();
};

