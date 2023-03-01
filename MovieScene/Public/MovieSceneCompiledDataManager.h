#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneEntityComponentField.h"
#include "MovieSceneEvaluationField.h"
#include "MovieSceneEvaluationTemplate.h"
#include "MovieSceneSequenceHierarchy.h"
#include "MovieSceneCompiledDataManager.generated.h"

UCLASS(Blueprintable)
class MOVIESCENE_API UMovieSceneCompiledDataManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMovieSceneSequenceHierarchy> Hierarchies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMovieSceneEvaluationTemplate> TrackTemplates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMovieSceneEvaluationField> TrackTemplateFields;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMovieSceneEntityComponentField> EntityComponentFields;
    
public:
    UMovieSceneCompiledDataManager();
};

