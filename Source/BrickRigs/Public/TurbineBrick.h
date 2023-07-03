#pragma once
#include "CoreMinimal.h"
#include "FuelConsumerBrick.h"
#include "VehicleInputChannel.h"
#include "TurbineBrick.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UTurbineBrick : public UFuelConsumerBrick {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel PowerInputChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel PitchInputChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel RollInputChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel YawInputChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel ThrottleInputChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel AutoHoverInputChannel;
    
public:
    UTurbineBrick();
};

