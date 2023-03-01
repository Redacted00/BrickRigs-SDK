#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "CharacterAnimInstance.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class BRICKRIGS_API UCharacterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UCharacterAnimInstance();
};

