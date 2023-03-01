#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableBase.h"
#include "NiagaraVariableWithOffset.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraVariableWithOffset : public FNiagaraVariableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Offset;
    
    NIAGARA_API FNiagaraVariableWithOffset();
};

