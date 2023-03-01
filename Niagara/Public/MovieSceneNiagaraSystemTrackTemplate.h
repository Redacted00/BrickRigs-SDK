#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneNiagaraSystemTrackTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    NIAGARA_API FMovieSceneNiagaraSystemTrackTemplate();
};

