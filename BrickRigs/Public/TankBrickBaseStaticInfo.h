#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "TankBrickBaseStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UTankBrickBaseStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelCapacity;
    
    UTankBrickBaseStaticInfo();
};

