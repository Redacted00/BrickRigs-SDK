#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieSceneBaseValueEvaluatorSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneBaseValueEvaluatorSystem();
};

