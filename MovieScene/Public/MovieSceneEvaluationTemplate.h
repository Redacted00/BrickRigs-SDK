#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneEvaluationTemplateSerialNumber.h"
#include "MovieSceneEvaluationTrack.h"
#include "MovieSceneTemplateGenerationLedger.h"
#include "MovieSceneTrackIdentifier.h"
#include "MovieSceneEvaluationTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SequenceSignature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTemplateGenerationLedger TemplateLedger;
    
public:
    MOVIESCENE_API FMovieSceneEvaluationTemplate();
};

