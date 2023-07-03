#pragma once
#include "CoreMinimal.h"
#include "ExplosiveItem.h"
#include "Grenade.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API AGrenade : public AExplosiveItem {
    GENERATED_BODY()
public:
    AGrenade();
};

