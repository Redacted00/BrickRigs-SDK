#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCompiledSequenceFlagStruct.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneCompiledSequenceFlagStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bParentSequenceRequiresLowerFence: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bParentSequenceRequiresUpperFence: 1;
    
    MOVIESCENE_API FMovieSceneCompiledSequenceFlagStruct();
};

