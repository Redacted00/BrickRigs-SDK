#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntitySystem.h"
#include "MovieSceneEntityInstantiatorSystem.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIESCENE_API UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneEntityInstantiatorSystem();
};

