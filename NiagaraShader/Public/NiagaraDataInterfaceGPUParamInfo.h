#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterfaceGeneratedFunction.h"
#include "NiagaraDataInterfaceGPUParamInfo.generated.h"

USTRUCT(BlueprintType)
struct NIAGARASHADER_API FNiagaraDataInterfaceGPUParamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataInterfaceHLSLSymbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DIClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;
    
    FNiagaraDataInterfaceGPUParamInfo();
};

