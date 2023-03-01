#pragma once
#include "CoreMinimal.h"
#include "EWaveSpectrumType.generated.h"

UENUM(BlueprintType)
enum class EWaveSpectrumType : uint8 {
    Phillips,
    PiersonMoskowitz,
    JONSWAP,
};

