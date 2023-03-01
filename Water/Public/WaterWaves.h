#pragma once
#include "CoreMinimal.h"
#include "WaterWavesBase.h"
#include "WaterWaves.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class WATER_API UWaterWaves : public UWaterWavesBase {
    GENERATED_BODY()
public:
    UWaterWaves();
};

