#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayer -FallbackName=LocalPlayer
#include "BrickLocalPlayer.generated.h"

UCLASS(Blueprintable, NonTransient)
class BRICKRIGS_API UBrickLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UBrickLocalPlayer();
};

