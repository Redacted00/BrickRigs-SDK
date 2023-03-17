#pragma once
#include "CoreMinimal.h"
#include "EPopupSizeRule.generated.h"

UENUM(BlueprintType)
enum class EPopupSizeRule : uint8 {
    Auto,
    Fill,
    FillH,
    FillV,
};

