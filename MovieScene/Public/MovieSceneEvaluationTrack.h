#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EEvaluationMethod.h"
#include "MovieSceneEvalTemplatePtr.h"
#include "MovieSceneTrackImplementationPtr.h"
#include "MovieSceneEvaluationTrack.generated.h"

class UMovieSceneTrack;

USTRUCT(BlueprintType)
struct FMovieSceneEvaluationTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ObjectBindingId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 EvaluationPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEvaluationMethod EvaluationMethod;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMovieSceneTrack> SourceTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneEvalTemplatePtr> ChildTemplates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTrackImplementationPtr TrackTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EvaluationGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEvaluateInPreroll: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEvaluateInPostroll: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTearDownPriority: 1;
    
public:
    MOVIESCENE_API FMovieSceneEvaluationTrack();
};

