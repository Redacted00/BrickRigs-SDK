#pragma once
#include "CoreMinimal.h"
#include "FuelConsumerBrick.h"
#include "VehicleInputChannel.h"
#include "ThrusterBrick.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UThrusterBrick : public UFuelConsumerBrick {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, ReplicatedUsing=OnRep_RepAccumulatedInput, meta=(AllowPrivateAccess=true))
    int8 RepAccumulatedInput;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel InputChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccumulated;
    
public:
    UThrusterBrick();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepAccumulatedInput();
    
};

