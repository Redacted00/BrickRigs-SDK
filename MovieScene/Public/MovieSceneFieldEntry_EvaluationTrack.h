#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationFieldTrackPtr.h"
#include "MovieSceneFieldEntry_EvaluationTrack.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFieldEntry_EvaluationTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvaluationFieldTrackPtr TrackPtr;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 NumChildren;
    
    MOVIESCENE_API FMovieSceneFieldEntry_EvaluationTrack();
};

