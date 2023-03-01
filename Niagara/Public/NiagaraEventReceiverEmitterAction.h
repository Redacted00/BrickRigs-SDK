#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraEventReceiverEmitterAction.generated.h"

UCLASS(Abstract, Blueprintable)
class UNiagaraEventReceiverEmitterAction : public UObject {
    GENERATED_BODY()
public:
    UNiagaraEventReceiverEmitterAction();
};

