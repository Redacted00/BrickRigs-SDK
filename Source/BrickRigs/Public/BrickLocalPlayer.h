#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "BrickLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class BRICKRIGS_API UBrickLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UBrickLocalPlayer();
};

