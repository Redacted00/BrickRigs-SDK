#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieSceneDeferredComponentMovementSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneDeferredComponentMovementSystem();
};

