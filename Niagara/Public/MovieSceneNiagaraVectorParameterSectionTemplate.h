#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "MovieSceneNiagaraParameterSectionTemplate.h"
#include "MovieSceneNiagaraVectorParameterSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel VectorChannels[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChannelsUsed;
    
public:
    NIAGARA_API FMovieSceneNiagaraVectorParameterSectionTemplate();
};

