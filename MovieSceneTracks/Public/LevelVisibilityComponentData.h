#pragma once
#include "CoreMinimal.h"
#include "LevelVisibilityComponentData.generated.h"

class UMovieSceneLevelVisibilitySection;

USTRUCT(BlueprintType)
struct FLevelVisibilityComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneLevelVisibilitySection* Section;
    
    MOVIESCENETRACKS_API FLevelVisibilityComponentData();
};

