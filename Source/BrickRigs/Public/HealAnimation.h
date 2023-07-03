#pragma once
#include "CoreMinimal.h"
#include "ItemAnimation.h"
#include "HealAnimation.generated.h"

USTRUCT(BlueprintType)
struct FHealAnimation : public FItemAnimation {
    GENERATED_BODY()
public:
    BRICKRIGS_API FHealAnimation();
};

