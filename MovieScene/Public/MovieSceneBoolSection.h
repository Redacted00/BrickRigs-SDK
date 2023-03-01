#pragma once
#include "CoreMinimal.h"
#include "MovieSceneBoolChannel.h"
#include "MovieSceneSection.h"
#include "MovieSceneBoolSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneBoolSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultValue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel BoolCurve;
    
public:
    UMovieSceneBoolSection();
};

