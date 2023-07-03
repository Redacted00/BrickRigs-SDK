#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ItemAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class BRICKRIGS_API UItemAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UItemAnimInstance();
};

