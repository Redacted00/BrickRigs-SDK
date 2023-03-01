#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "ENiagaraAgeUpdateMode.h"
#include "ENiagaraSystemSpawnSectionEndBehavior.h"
#include "ENiagaraSystemSpawnSectionEvaluateBehavior.h"
#include "ENiagaraSystemSpawnSectionStartBehavior.h"
#include "MovieSceneNiagaraSystemSpawnSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraAgeUpdateMode AgeUpdateMode;
    
public:
    UMovieSceneNiagaraSystemSpawnSection();
};

