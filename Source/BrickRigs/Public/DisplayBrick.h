#pragma once
#include "CoreMinimal.h"
#include "BrickColor.h"
#include "ScalableBrick.h"
#include "VehicleInputChannel.h"
#include "DisplayBrick.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UDisplayBrick : public UScalableBrick {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel InputChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickColor DisplayColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumFractionalDigits;
    
public:
    UDisplayBrick();
};

