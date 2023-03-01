#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBlenderSystem -FallbackName=MovieSceneBlenderSystem
#include "MovieScenePiecewiseIntegerBlenderSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem {
    GENERATED_BODY()
public:
    UMovieScenePiecewiseIntegerBlenderSystem();
};

