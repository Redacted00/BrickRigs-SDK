#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationGroupLUTIndex.h"
#include "MovieSceneFieldEntry_ChildTemplate.h"
#include "MovieSceneFieldEntry_EvaluationTrack.h"
#include "MovieSceneEvaluationGroup.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT;
    
    MOVIESCENE_API FMovieSceneEvaluationGroup();
};

