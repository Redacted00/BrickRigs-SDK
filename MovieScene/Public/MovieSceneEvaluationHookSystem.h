#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntitySystem.h"
#include "MovieSceneEvaluationHookEventContainer.h"
#include "MovieSceneEvaluationInstanceKey.h"
#include "MovieSceneEvaluationHookSystem.generated.h"

UCLASS(Blueprintable)
class MOVIESCENE_API UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMovieSceneEvaluationInstanceKey, FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;
    
public:
    UMovieSceneEvaluationHookSystem();
};

