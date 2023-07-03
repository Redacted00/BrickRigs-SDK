#pragma once
#include "CoreMinimal.h"
#include "SensorBrickBaseStaticInfo.h"
#include "SwitchBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API USwitchBrickStaticInfo : public USensorBrickBaseStaticInfo {
    GENERATED_BODY()
public:
    USwitchBrickStaticInfo();
};

