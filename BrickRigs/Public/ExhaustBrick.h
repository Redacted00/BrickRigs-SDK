#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "BrickColor.h"
#include "VehicleInputChannel.h"
#include "ExhaustBrick.generated.h"

class UMotorBrick;

UCLASS(Blueprintable)
class BRICKRIGS_API UExhaustBrick : public UBrick {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMotorBrick* ConnectedMotor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel InputChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickColor SmokeColor;
    
public:
    UExhaustBrick();
};

