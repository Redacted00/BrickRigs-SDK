#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WaterWavesBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class WATER_API UWaterWavesBase : public UObject {
    GENERATED_BODY()
public:
    UWaterWavesBase();
};

