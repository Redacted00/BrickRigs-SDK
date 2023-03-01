#pragma once
#include "CoreMinimal.h"
#include "TankBrickBaseStaticInfo.h"
#include "Templates/SubclassOf.h"
#include "FuelConsumerBrickStaticInfo.generated.h"

class UExplosiveMaterial;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UFuelConsumerBrickStaticInfo : public UTankBrickBaseStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelConsumption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UExplosiveMaterial> FuelType;
    
    UFuelConsumerBrickStaticInfo();
};

