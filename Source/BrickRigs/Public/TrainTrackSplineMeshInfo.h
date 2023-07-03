#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TrainTrackSplineMeshInfo.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FTrainTrackSplineMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RailOffset;
    
    BRICKRIGS_API FTrainTrackSplineMeshInfo();
};

