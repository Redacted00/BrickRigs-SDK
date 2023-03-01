#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "MovieSceneEventSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneEventSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UMovieSceneEventSystem();
};

