#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterStore.h"
#include "NiagaraScriptExecutionPaddingInfo.h"
#include "NiagaraScriptExecutionParameterStore.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ParameterSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PaddedParameterSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInitialized: 1;
    
    NIAGARA_API FNiagaraScriptExecutionParameterStore();
};

