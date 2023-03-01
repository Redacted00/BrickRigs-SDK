#pragma once
#include "CoreMinimal.h"
#include "EBrushBlendType.generated.h"

UENUM(BlueprintType)
enum class EBrushBlendType : uint8 {
    AlphaBlend,
    Min,
    Max,
    Additive,
};

