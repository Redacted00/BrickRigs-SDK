#pragma once
#include "CoreMinimal.h"
#include "NiagaraEventGeneratorProperties.h"
#include "NiagaraEventReceiverProperties.h"
#include "NiagaraEmitterScriptProperties.generated.h"

class UNiagaraScript;

USTRUCT(BlueprintType)
struct FNiagaraEmitterScriptProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraScript* Script;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraEventReceiverProperties> EventReceivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraEventGeneratorProperties> EventGenerators;
    
    NIAGARA_API FNiagaraEmitterScriptProperties();
};

