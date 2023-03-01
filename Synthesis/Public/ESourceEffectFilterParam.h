#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectFilterParam.generated.h"

UENUM(BlueprintType)
enum class ESourceEffectFilterParam : uint8 {
    FilterFrequency,
    FilterResonance,
    Count,
};

