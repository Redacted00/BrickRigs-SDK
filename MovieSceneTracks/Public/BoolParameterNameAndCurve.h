#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBoolChannel -FallbackName=MovieSceneBoolChannel
#include "BoolParameterNameAndCurve.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FBoolParameterNameAndCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel ParameterCurve;
    
    FBoolParameterNameAndCurve();
};

