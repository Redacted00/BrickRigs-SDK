#pragma once
#include "CoreMinimal.h"
#include "TankBrickBaseStaticInfo.h"
#include "FuelConsumerBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UFuelConsumerBrickStaticInfo : public UTankBrickBaseStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelConsumption;
    
    UFuelConsumerBrickStaticInfo();
};

