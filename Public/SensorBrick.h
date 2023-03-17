#pragma once
#include "CoreMinimal.h"
#include "EProximitySensorMask.h"
#include "ESensorType.h"
#include "SensorBrickBase.h"
#include "VehicleInputChannel.h"
#include "SensorBrick.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API USensorBrick : public USensorBrickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel EnabledInputChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESensorType SensorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProximitySensorMask TraceMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnToZero;
    
public:
    USensorBrick();
};

