#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationHookEvent.h"
#include "MovieSceneEvaluationHookEventContainer.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationHookEventContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneEvaluationHookEvent> Events;
    
    MOVIESCENE_API FMovieSceneEvaluationHookEventContainer();
};

