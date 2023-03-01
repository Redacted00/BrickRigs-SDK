#pragma once
#include "CoreMinimal.h"
#include "VehicleInputChannelBase.h"
#include "VehicleInputChannel.generated.h"

USTRUCT(BlueprintType)
struct FVehicleInputChannel : public FVehicleInputChannelBase {
    GENERATED_BODY()
public:
    BRICKRIGS_API FVehicleInputChannel();
};

