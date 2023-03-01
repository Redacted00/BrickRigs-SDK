#pragma once
#include "CoreMinimal.h"
#include "FuelConsumerBrick.h"
#include "VehicleInputChannel.h"
#include "MotorBrick.generated.h"

class UAxleBrick;

UCLASS(Blueprintable)
class BRICKRIGS_API UMotorBrick : public UFuelConsumerBrick {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAxleBrick*> ConnectedAxles;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel ThrottleInputChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GearRatioScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTankDrive;
    
    UMotorBrick();
};

