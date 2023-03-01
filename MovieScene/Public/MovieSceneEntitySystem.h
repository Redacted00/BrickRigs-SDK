#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneEntitySystem.generated.h"

class UMovieSceneEntitySystemLinker;

UCLASS(Blueprintable)
class MOVIESCENE_API UMovieSceneEntitySystem : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneEntitySystemLinker* Linker;
    
public:
    UMovieSceneEntitySystem();
};

