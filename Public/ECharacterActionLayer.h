#pragma once
#include "CoreMinimal.h"
#include "ECharacterActionLayer.generated.h"

UENUM(BlueprintType)
enum class ECharacterActionLayer : uint8 {
    UpperBody,
    LowerBody,
    FullBody,
};

