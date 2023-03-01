#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityInstantiatorSystem -FallbackName=MovieSceneEntityInstantiatorSystem
#include "MovieSceneComponentAttachmentInvalidatorSystem.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UMovieSceneComponentAttachmentInvalidatorSystem();
};

