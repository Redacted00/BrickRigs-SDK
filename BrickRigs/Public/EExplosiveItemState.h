#pragma once
#include "CoreMinimal.h"
#include "EExplosiveItemState.generated.h"

UENUM(BlueprintType)
enum class EExplosiveItemState : uint8 {
    Safe,
    Primed,
    Exploded,
};

