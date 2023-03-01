#pragma once
#include "CoreMinimal.h"
#include "ARComponent.h"
#include "ARMeshUpdatePayload.h"
#include "ARMeshComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARMeshComponent : public UARComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Payload, meta=(AllowPrivateAccess=true))
    FARMeshUpdatePayload ReplicatedPayload;
    
public:
    UARMeshComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdatePayload(const FARMeshUpdatePayload& NewPayload);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdate(const FARMeshUpdatePayload& Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAdd(const FARMeshUpdatePayload& Payload);
    
};

