#pragma once
#include "CoreMinimal.h"
#include "BrickStructPropertyInterface.h"
#include "VehicleOutputChannel.generated.h"

USTRUCT(BlueprintType)
struct FVehicleOutputChannel : public FBrickStructPropertyInterface {
    GENERATED_BODY()
public:
    BRICKRIGS_API FVehicleOutputChannel();
};

