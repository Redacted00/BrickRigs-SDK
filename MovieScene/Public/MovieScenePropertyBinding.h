#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyBinding.generated.h"

USTRUCT(BlueprintType)
struct FMovieScenePropertyBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUseClassLookup;
    
    MOVIESCENE_API FMovieScenePropertyBinding();
};

