#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
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

