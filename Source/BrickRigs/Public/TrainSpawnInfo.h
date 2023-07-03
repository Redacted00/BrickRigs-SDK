#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TrainSpawnInfo.generated.h"

class ATrain;

USTRUCT(BlueprintType)
struct FTrainSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATrain> TrainClass;
    
    BRICKRIGS_API FTrainSpawnInfo();
};

