#pragma once
#include "CoreMinimal.h"
#include "EConstantQNormalizationEnum.generated.h"

UENUM(BlueprintType)
enum class EConstantQNormalizationEnum : uint8 {
    EqualEuclideanNorm,
    EqualEnergy,
    EqualAmplitude,
};

