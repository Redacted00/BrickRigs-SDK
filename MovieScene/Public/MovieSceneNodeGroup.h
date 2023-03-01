#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieSceneNodeGroup.generated.h"

UCLASS(Blueprintable)
class MOVIESCENE_API UMovieSceneNodeGroup : public UObject {
    GENERATED_BODY()
public:
    UMovieSceneNodeGroup();
};

