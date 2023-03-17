#pragma once
#include "CoreMinimal.h"
#include "BaseCharacterMovementComponent.h"
#include "BrickCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBrickCharacterMovementComponent : public UBaseCharacterMovementComponent {
    GENERATED_BODY()
public:
    UBrickCharacterMovementComponent();
};

