#pragma once
#include "CoreMinimal.h"
#include "ItemAnimation.h"
#include "UnequipAnimation.generated.h"

USTRUCT(BlueprintType)
struct FUnequipAnimation : public FItemAnimation {
    GENERATED_BODY()
public:
    BRICKRIGS_API FUnequipAnimation();
};

