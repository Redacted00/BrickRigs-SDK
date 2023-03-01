#pragma once
#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "Zombie.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API AZombie : public ABaseCharacter {
    GENERATED_BODY()
public:
    AZombie();
};

