#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntitySystem.h"
#include "MovieSceneSpawnablesSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneSpawnablesSystem();
};

