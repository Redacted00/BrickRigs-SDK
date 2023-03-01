#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntitySystem -FallbackName=MovieSceneEntitySystem
#include "WeightAndEasingEvaluatorSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
    UWeightAndEasingEvaluatorSystem();
};

