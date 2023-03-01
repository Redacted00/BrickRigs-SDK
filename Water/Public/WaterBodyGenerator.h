#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "WaterBodyGenerator.generated.h"

UCLASS(Abstract, Blueprintable, Within=WaterBody)
class WATER_API UWaterBodyGenerator : public UObject {
    GENERATED_BODY()
public:
    UWaterBodyGenerator();
};

