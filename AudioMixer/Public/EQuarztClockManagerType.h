#pragma once
#include "CoreMinimal.h"
#include "EQuarztClockManagerType.generated.h"

UENUM(BlueprintType)
enum class EQuarztClockManagerType : uint8 {
    AudioEngine,
    QuartzSubsystem,
    Count,
};

