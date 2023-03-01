#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "FloatChannelEvaluatorSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UFloatChannelEvaluatorSystem();
};

