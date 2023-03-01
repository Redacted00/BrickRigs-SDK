#pragma once
#include "CoreMinimal.h"
#include "ARComponent.h"
#include "AREnvironmentProbeUpdatePayload.h"
#include "AREnvironmentProbeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UAREnvironmentProbeComponent : public UARComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Payload, meta=(AllowPrivateAccess=true))
    FAREnvironmentProbeUpdatePayload ReplicatedPayload;
    
public:
    UAREnvironmentProbeComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdatePayload(const FAREnvironmentProbeUpdatePayload& NewPayload);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdate(const FAREnvironmentProbeUpdatePayload& Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAdd(const FAREnvironmentProbeUpdatePayload& Payload);
    
};

