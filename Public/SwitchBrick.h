#pragma once
#include "CoreMinimal.h"
#include "SensorBrickBase.h"
#include "VehicleInputChannel.h"
#include "SwitchBrick.generated.h"

class ABrickPlayerController;

UCLASS(Blueprintable)
class BRICKRIGS_API USwitchBrick : public USensorBrickBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_InteractionValue, meta=(AllowPrivateAccess=true))
    int8 InteractionValue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel InputChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnToZero;
    
public:
    USwitchBrick();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_InteractionValue();
    
    UFUNCTION(BlueprintCallable)
    void Interact_Switch(ABrickPlayerController* OtherPC, float Val);
    
    UFUNCTION(BlueprintCallable)
    void Interact_Deactivate(ABrickPlayerController* OtherPC);
    
};

