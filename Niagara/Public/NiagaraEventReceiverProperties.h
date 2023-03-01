#pragma once
#include "CoreMinimal.h"
#include "NiagaraEventReceiverProperties.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraEventReceiverProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceEventGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceEmitter;
    
    NIAGARA_API FNiagaraEventReceiverProperties();
};

