#pragma once
#include "CoreMinimal.h"
#include "CharacterAnimInstanceProxy.h"
#include "ZombieAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FZombieAnimInstanceProxy : public FCharacterAnimInstanceProxy {
    GENERATED_BODY()
public:
    BRICKRIGS_API FZombieAnimInstanceProxy();
};

