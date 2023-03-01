#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntityInstantiatorSystem.h"
#include "MovieSceneGenericBoundObjectInstantiator.generated.h"

UCLASS(Blueprintable)
class MOVIESCENE_API UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UMovieSceneGenericBoundObjectInstantiator();
};

