#pragma once
#include "CoreMinimal.h"
#include "VehicleInputAndOutputChannelBase.h"
#include "VehicleOutputChannel.generated.h"

USTRUCT(BlueprintType)
struct FVehicleOutputChannel : public FVehicleInputAndOutputChannelBase {
    GENERATED_BODY()
public:
    BRICKRIGS_API FVehicleOutputChannel();
};

