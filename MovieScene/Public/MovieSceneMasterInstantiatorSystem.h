#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntityInstantiatorSystem.h"
#include "MovieSceneMasterInstantiatorSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENE_API UMovieSceneMasterInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UMovieSceneMasterInstantiatorSystem();
};

