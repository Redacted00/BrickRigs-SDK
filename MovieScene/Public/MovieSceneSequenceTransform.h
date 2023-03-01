#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNestedSequenceTransform.h"
#include "MovieSceneTimeTransform.h"
#include "MovieSceneSequenceTransform.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneTimeTransform LinearTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneNestedSequenceTransform> NestedTransforms;
    
    MOVIESCENE_API FMovieSceneSequenceTransform();
};

