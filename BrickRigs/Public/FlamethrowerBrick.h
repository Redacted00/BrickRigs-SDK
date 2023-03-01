#pragma once
#include "CoreMinimal.h"
#include "FuelConsumerBrick.h"
#include "VehicleInputChannel.h"
#include "FlamethrowerBrick.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UFlamethrowerBrick : public UFuelConsumerBrick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleInputChannel InputChannel;
    
    UFlamethrowerBrick();
};

