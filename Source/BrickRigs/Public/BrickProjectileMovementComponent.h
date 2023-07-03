#pragma once
#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "BrickProjectileMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBrickProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UBrickProjectileMovementComponent();
};

