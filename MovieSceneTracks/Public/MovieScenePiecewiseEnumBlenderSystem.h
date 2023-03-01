#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBlenderSystem -FallbackName=MovieSceneBlenderSystem
#include "MovieScenePiecewiseEnumBlenderSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem {
    GENERATED_BODY()
public:
    UMovieScenePiecewiseEnumBlenderSystem();
};

