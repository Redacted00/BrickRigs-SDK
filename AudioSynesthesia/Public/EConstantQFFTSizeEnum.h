#pragma once
#include "CoreMinimal.h"
#include "EConstantQFFTSizeEnum.generated.h"

UENUM(BlueprintType)
enum class EConstantQFFTSizeEnum : uint8 {
    Min,
    XXSmall,
    XSmall,
    Small,
    Medium,
    Large,
    XLarge,
    XXLarge,
    Max,
};

