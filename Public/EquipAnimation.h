#pragma once
#include "CoreMinimal.h"
#include "ItemAnimation.h"
#include "EquipAnimation.generated.h"

USTRUCT(BlueprintType)
struct FEquipAnimation : public FItemAnimation {
    GENERATED_BODY()
public:
    BRICKRIGS_API FEquipAnimation();
};

