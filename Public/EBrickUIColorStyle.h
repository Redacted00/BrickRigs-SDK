#pragma once
#include "CoreMinimal.h"
#include "EBrickUIColorStyle.generated.h"

UENUM(BlueprintType)
enum class EBrickUIColorStyle : uint8 {
    Default,
    Highlight,
    Positive,
    Negative,
    Neutral,
    EditorSelected,
    EditorActive,
    Custom,
    Max,
};

