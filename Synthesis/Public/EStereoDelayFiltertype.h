#pragma once
#include "CoreMinimal.h"
#include "EStereoDelayFiltertype.generated.h"

UENUM(BlueprintType)
enum class EStereoDelayFiltertype : uint8 {
    Lowpass,
    Highpass,
    Bandpass,
    Notch,
    Count,
};

