#pragma once
#include "CoreMinimal.h"
#include "ActuatorState.h"
#include "Brick.h"
#include "EActuatorMode.h"
#include "VehicleInputChannel.h"
#include "ActuatorBrick.generated.h"

class ABrickPlayerController;

UCLASS(Blueprintable)
class BRICKRIGS_API UActuatorBrick : public UBrick {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepActuatorState, meta=(AllowPrivateAccess=true))
    FActuatorState RepActuatorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickPlayerController* InteractingPC;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActuatorMode ActuatorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel InputChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinLimit;
    
public:
    UActuatorBrick();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepActuatorState();
    
    UFUNCTION(BlueprintCallable)
    void Interact_Actuate(ABrickPlayerController* OtherPC, float Val);
    
};

