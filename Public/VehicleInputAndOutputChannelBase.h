#pragma once
#include "CoreMinimal.h"
#include "BrickStructPropertyInterface.h"
#include "VehicleInputAndOutputChannelBase.generated.h"

USTRUCT(BlueprintType)
struct FVehicleInputAndOutputChannelBase : public FBrickStructPropertyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ChannelIndex;
    
    BRICKRIGS_API FVehicleInputAndOutputChannelBase();
};

