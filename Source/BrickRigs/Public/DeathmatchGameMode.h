#pragma once
#include "CoreMinimal.h"
#include "BrickGameMode.h"
#include "DeathmatchGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class BRICKRIGS_API ADeathmatchGameMode : public ABrickGameMode {
    GENERATED_BODY()
public:
    ADeathmatchGameMode();
};

