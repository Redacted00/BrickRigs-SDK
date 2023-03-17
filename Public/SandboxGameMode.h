#pragma once
#include "CoreMinimal.h"
#include "BrickGameMode.h"
#include "SandboxGameMode.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class BRICKRIGS_API ASandboxGameMode : public ABrickGameMode {
    GENERATED_BODY()
public:
    ASandboxGameMode();
};

