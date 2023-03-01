#pragma once
#include "CoreMinimal.h"
#include "ARComponent.h"
#include "ARGeoAnchorUpdatePayload.h"
#include "EGeoAnchorComponentDebugMode.h"
#include "ARGeoAnchorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AUGMENTEDREALITY_API UARGeoAnchorComponent : public UARComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Payload, meta=(AllowPrivateAccess=true))
    FARGeoAnchorUpdatePayload ReplicatedPayload;
    
public:
    UARGeoAnchorComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    static void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdatePayload(const FARGeoAnchorUpdatePayload& NewPayload);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveUpdate(const FARGeoAnchorUpdatePayload& Payload);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAdd(const FARGeoAnchorUpdatePayload& Payload);
    
};

