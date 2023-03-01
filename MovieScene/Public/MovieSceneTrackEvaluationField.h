#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackEvaluationFieldEntry.h"
#include "MovieSceneTrackEvaluationField.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTrackEvaluationField {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneTrackEvaluationFieldEntry> Entries;
    
    MOVIESCENE_API FMovieSceneTrackEvaluationField();
};

