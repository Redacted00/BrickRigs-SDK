#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntityInstantiatorSystem.h"
#include "MovieSceneCachePreAnimatedStateSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UMovieSceneCachePreAnimatedStateSystem();
};

