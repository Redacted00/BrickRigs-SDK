#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "ESectionEvaluationFlags.h"
#include "MovieSceneFieldEntry_ChildTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFieldEntry_ChildTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ChildIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESectionEvaluationFlags Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber ForcedTime;
    
    MOVIESCENE_API FMovieSceneFieldEntry_ChildTemplate();
};

