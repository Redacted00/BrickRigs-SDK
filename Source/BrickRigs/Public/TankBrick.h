#pragma once
#include "CoreMinimal.h"
#include "TankBrickBase.h"
#include "Templates/SubclassOf.h"
#include "TankBrick.generated.h"

class UExplosiveMaterial;

UCLASS(Blueprintable)
class BRICKRIGS_API UTankBrick : public UTankBrickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UExplosiveMaterial> FuelType;
    
public:
    UTankBrick();
};

