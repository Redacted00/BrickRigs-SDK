#pragma once
#include "CoreMinimal.h"
#include "ETimedDataInputEvaluationType.generated.h"

UENUM(BlueprintType)
enum class ETimedDataInputEvaluationType : uint8 {
    None,
    Timecode,
    PlatformTime,
};

