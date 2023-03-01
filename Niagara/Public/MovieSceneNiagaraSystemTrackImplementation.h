#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackImplementation -FallbackName=MovieSceneTrackImplementation
#include "ENiagaraAgeUpdateMode.h"
#include "ENiagaraSystemSpawnSectionEndBehavior.h"
#include "ENiagaraSystemSpawnSectionEvaluateBehavior.h"
#include "ENiagaraSystemSpawnSectionStartBehavior.h"
#include "MovieSceneNiagaraSystemTrackImplementation.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SpawnSectionStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber SpawnSectionEndFrame;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraAgeUpdateMode AgeUpdateMode;
    
public:
    NIAGARA_API FMovieSceneNiagaraSystemTrackImplementation();
};

