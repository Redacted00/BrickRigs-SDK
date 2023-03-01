#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumberRange -FallbackName=FrameNumberRange
#include "ESectionEvaluationFlags.h"
#include "MovieSceneTrackEvaluationFieldEntry.generated.h"

class UMovieSceneSection;

USTRUCT(BlueprintType)
struct FMovieSceneTrackEvaluationFieldEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneSection* Section;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumberRange Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber ForcedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESectionEvaluationFlags Flags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 LegacySortOrder;
    
    MOVIESCENE_API FMovieSceneTrackEvaluationFieldEntry();
};

