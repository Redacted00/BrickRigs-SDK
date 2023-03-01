#pragma once
#include "CoreMinimal.h"
#include "EInitialWaveOscillatorOffsetType.generated.h"

UENUM(BlueprintType)
enum class EInitialWaveOscillatorOffsetType : uint8 {
    Random,
    Zero,
};

