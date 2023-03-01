#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntityInstantiatorSystem.h"
#include "MovieSceneRestorePreAnimatedStateSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UMovieSceneRestorePreAnimatedStateSystem();
};

