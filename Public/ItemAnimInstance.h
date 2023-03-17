#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "ItemAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class BRICKRIGS_API UItemAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UItemAnimInstance();
};

