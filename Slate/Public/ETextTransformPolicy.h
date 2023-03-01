#pragma once
#include "CoreMinimal.h"
#include "ETextTransformPolicy.generated.h"

UENUM(BlueprintType)
enum class ETextTransformPolicy : uint8 {
    None,
    ToLower,
    ToUpper,
};

