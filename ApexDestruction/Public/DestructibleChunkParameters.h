#pragma once
#include "CoreMinimal.h"
#include "DestructibleChunkParameters.generated.h"

USTRUCT(BlueprintType)
struct FDestructibleChunkParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSupportChunk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotFracture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotCrumble;
    
    APEXDESTRUCTION_API FDestructibleChunkParameters();
};

