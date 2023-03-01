#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntityProvider.h"
#include "MovieSceneEvaluationHook.h"
#include "MovieSceneSection.h"
#include "MovieSceneHookSection.generated.h"

UCLASS(Blueprintable)
class MOVIESCENE_API UMovieSceneHookSection : public UMovieSceneSection, public IMovieSceneEntityProvider, public IMovieSceneEvaluationHook {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequiresRangedHook: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequiresTriggerHooks: 1;
    
public:
    UMovieSceneHookSection();
    
    // Fix for true pure virtual functions not being implemented
};

