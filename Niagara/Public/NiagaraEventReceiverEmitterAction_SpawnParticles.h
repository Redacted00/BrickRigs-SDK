#pragma once
#include "CoreMinimal.h"
#include "NiagaraEventReceiverEmitterAction.h"
#include "NiagaraEventReceiverEmitterAction_SpawnParticles.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumParticles;
    
    UNiagaraEventReceiverEmitterAction_SpawnParticles();
};

