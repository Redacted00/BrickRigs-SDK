#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityInstantiatorSystem -FallbackName=MovieSceneEntityInstantiatorSystem
#include "MovieSceneInitialValueSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UMovieSceneInitialValueSystem();
};

