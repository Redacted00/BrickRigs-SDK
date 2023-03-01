#pragma once
#include "CoreMinimal.h"
#include "BrickEditorObjectPtr.h"
#include "EVehicleInputAxis.h"
#include "VehicleInputAndOutputChannelBase.h"
#include "VehicleInputChannelBase.generated.h"

USTRUCT(BlueprintType)
struct FVehicleInputChannelBase : public FVehicleInputAndOutputChannelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleInputAxis InputAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickEditorObjectPtr Seat;
    
    BRICKRIGS_API FVehicleInputChannelBase();
};

