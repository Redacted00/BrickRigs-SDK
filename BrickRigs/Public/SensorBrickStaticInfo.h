#pragma once
#include "CoreMinimal.h"
#include "SensorBrickBaseStaticInfo.h"
#include "SensorBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API USensorBrickStaticInfo : public USensorBrickBaseStaticInfo {
    GENERATED_BODY()
public:
    USensorBrickStaticInfo();
};

