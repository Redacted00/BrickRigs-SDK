#pragma once
#include "CoreMinimal.h"
#include "VehicleInputAndOutputChannelBase.h"
#include "VehicleOutputChannel.generated.h"

USTRUCT(BlueprintType)
struct FVehicleOutputChannel : public FVehicleInputAndOutputChannelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxOut;
    
    BRICKRIGS_API FVehicleOutputChannel();
};

