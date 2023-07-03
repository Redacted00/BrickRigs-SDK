#pragma once
#include "CoreMinimal.h"
#include "TankBrickBase.h"
#include "FuelConsumerBrick.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UFuelConsumerBrick : public UTankBrickBase {
    GENERATED_BODY()
public:
    UFuelConsumerBrick();
};

