#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "SensorBrickBaseStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API USensorBrickBaseStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    USensorBrickBaseStaticInfo();
};

