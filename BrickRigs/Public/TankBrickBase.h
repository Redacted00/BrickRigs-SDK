#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "TankBrickBase.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UTankBrickBase : public UBrick {
    GENERATED_BODY()
public:
    UTankBrickBase();
};

