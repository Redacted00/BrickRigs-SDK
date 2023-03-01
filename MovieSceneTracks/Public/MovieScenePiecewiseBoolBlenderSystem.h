#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBlenderSystem -FallbackName=MovieSceneBlenderSystem
#include "MovieScenePiecewiseBoolBlenderSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem {
    GENERATED_BODY()
public:
    UMovieScenePiecewiseBoolBlenderSystem();
};

