#pragma once
#include "CoreMinimal.h"
#include "NiagaraScriptExecutionPaddingInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraScriptExecutionPaddingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SrcOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 DestOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SrcSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 DestSize;
    
    NIAGARA_API FNiagaraScriptExecutionPaddingInfo();
};

