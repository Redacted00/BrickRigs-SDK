#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "EMathBrickOperation.h"
#include "VehicleInputChannel.h"
#include "VehicleOutputChannel.h"
#include "MathBrick.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UMathBrick : public UBrick {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMathBrickOperation Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel InputChannelA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel InputChannelB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleOutputChannel OutputChannel;
    
public:
    UMathBrick();
};

