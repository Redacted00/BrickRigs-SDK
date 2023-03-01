#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneIntegerChannel -FallbackName=MovieSceneIntegerChannel
#include "MovieSceneNiagaraParameterSectionTemplate.h"
#include "MovieSceneNiagaraIntegerParameterSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneIntegerChannel IntegerChannel;
    
public:
    NIAGARA_API FMovieSceneNiagaraIntegerParameterSectionTemplate();
};

