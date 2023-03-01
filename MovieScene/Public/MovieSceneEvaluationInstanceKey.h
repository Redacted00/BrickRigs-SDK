#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationInstanceKey.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationInstanceKey {
    GENERATED_BODY()
public:
    MOVIESCENE_API FMovieSceneEvaluationInstanceKey();
};
FORCEINLINE uint32 GetTypeHash(const FMovieSceneEvaluationInstanceKey) { return 0; }

