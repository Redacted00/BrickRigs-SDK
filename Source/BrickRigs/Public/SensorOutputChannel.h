#pragma once
#include "CoreMinimal.h"
#include "VehicleOutputChannel.h"
#include "SensorOutputChannel.generated.h"

USTRUCT(BlueprintType)
struct FSensorOutputChannel : public FVehicleOutputChannel {
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
    
    BRICKRIGS_API FSensorOutputChannel();
};

