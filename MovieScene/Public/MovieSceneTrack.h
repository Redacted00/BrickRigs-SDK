#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneSignedObject.h"
#include "MovieSceneTrackEvalOptions.h"
#include "MovieSceneTrackEvaluationField.h"
#include "MovieSceneTrack.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, MinimalAPI)
class UMovieSceneTrack : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTrackEvalOptions EvalOptions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEvalDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RowsDisabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid EvaluationFieldGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTrackEvaluationField EvaluationField;
    
public:
    UMovieSceneTrack();
};

