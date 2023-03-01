#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvaluationFieldEntity.h"
#include "MovieSceneEvaluationFieldEntityMetaData.h"
#include "MovieSceneEvaluationFieldEntityTree.h"
#include "MovieSceneEvaluationFieldSharedEntityMetaData.h"
#include "MovieSceneEntityComponentField.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneEntityComponentField {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvaluationFieldEntityTree PersistentEntityTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvaluationFieldEntityTree OneShotEntityTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneEvaluationFieldEntity> Entities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;
    
public:
    FMovieSceneEntityComponentField();
};

