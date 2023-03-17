#pragma once
#include "CoreMinimal.h"
#include "ECharacterStateOfHealth.generated.h"

UENUM(BlueprintType)
enum class ECharacterStateOfHealth : uint8 {
    Conscious,
    Unconscious,
    Dead,
};

