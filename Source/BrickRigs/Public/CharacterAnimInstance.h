#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterAnimInstance.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class BRICKRIGS_API UCharacterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UCharacterAnimInstance();
};

