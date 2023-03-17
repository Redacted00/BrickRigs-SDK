#pragma once
#include "CoreMinimal.h"
#include "ECharacterHealingState.generated.h"

UENUM(BlueprintType)
enum class ECharacterHealingState : uint8 {
    NotHealing,
    Healing,
    HealingFirstAidKit,
};

