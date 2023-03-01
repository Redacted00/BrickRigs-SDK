#pragma once
#include "CoreMinimal.h"
#include "ARComponent.h"
#include "ARQRCodeUpdatePayload.h"
#include "EQRCodeComponentDebugMode.h"
#include "ARQRCodeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARQRCodeComponent : public UARComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Payload, meta=(AllowPrivateAccess=true))
    FARQRCodeUpdatePayload ReplicatedPayload;
    
public:
    UARQRCodeComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdatePayload(const FARQRCodeUpdatePayload& NewPayload);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdate(const FARQRCodeUpdatePayload& Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAdd(const FARQRCodeUpdatePayload& Payload);
    
};

