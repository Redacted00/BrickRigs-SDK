#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "LandscapeSubsystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ULandscapeSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    ULandscapeSubsystem();
};

