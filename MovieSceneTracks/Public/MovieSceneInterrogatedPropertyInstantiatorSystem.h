#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityInstantiatorSystem -FallbackName=MovieSceneEntityInstantiatorSystem
#include "MovieSceneInterrogatedPropertyInstantiatorSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UMovieSceneInterrogatedPropertyInstantiatorSystem();
};

