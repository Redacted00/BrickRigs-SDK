#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceCompilerMaskStruct.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceCompilerMaskStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHierarchy: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEvaluationTemplate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEvaluationTemplateField: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEntityComponentField: 1;
    
    MOVIESCENE_API FMovieSceneSequenceCompilerMaskStruct();
};

