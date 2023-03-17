#pragma once
#include "CoreMinimal.h"
#include "EMirrorMode.generated.h"

UENUM(BlueprintType)
enum class EMirrorMode : uint8 {
    None,
    YForward,
    ZForward,
    XYSymmetry,
    XYNegSymmetry,
};

