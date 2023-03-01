#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "VehicleOutputChannel.h"
#include "SensorBrickBase.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API USensorBrickBase : public UBrick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleOutputChannel OutputChannel;
    
    USensorBrickBase();
};

