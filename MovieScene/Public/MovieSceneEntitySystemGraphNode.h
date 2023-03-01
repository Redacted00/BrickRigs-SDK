#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntitySystemGraphNode.generated.h"

class UMovieSceneEntitySystem;

USTRUCT(BlueprintType)
struct FMovieSceneEntitySystemGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneEntitySystem* System;
    
    MOVIESCENE_API FMovieSceneEntitySystemGraphNode();
};

