#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventSystem.h"
#include "MovieScenePostSpawnEventSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem {
    GENERATED_BODY()
public:
    UMovieScenePostSpawnEventSystem();
};

