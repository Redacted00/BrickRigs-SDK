#pragma once
#include "CoreMinimal.h"
#include "BrickGameMode.h"
#include "BattleGameMode.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class BRICKRIGS_API ABattleGameMode : public ABrickGameMode {
    GENERATED_BODY()
public:
    ABattleGameMode();
};

