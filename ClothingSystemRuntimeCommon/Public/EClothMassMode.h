#pragma once
#include "CoreMinimal.h"
#include "EClothMassMode.generated.h"

UENUM(BlueprintType)
enum class EClothMassMode : uint8 {
    UniformMass,
    TotalMass,
    Density,
    MaxClothMassMode,
};

