#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "Templates/SubclassOf.h"
#include "TankBrickBaseStaticInfo.generated.h"

class UExplosiveMaterial;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UTankBrickBaseStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UExplosiveMaterial> FuelType;
    
    UTankBrickBaseStaticInfo();
};

