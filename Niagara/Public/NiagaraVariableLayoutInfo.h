#pragma once
#include "CoreMinimal.h"
#include "NiagaraTypeLayoutInfo.h"
#include "NiagaraVariableLayoutInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraVariableLayoutInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 FloatComponentStart;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Int32ComponentStart;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 HalfComponentStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraTypeLayoutInfo LayoutInfo;
    
    NIAGARA_API FNiagaraVariableLayoutInfo();
};

