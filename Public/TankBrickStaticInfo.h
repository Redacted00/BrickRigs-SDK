#pragma once
#include "CoreMinimal.h"
#include "TankBrickBaseStaticInfo.h"
#include "TankBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UTankBrickStaticInfo : public UTankBrickBaseStaticInfo {
    GENERATED_BODY()
public:
    UTankBrickStaticInfo();
};

