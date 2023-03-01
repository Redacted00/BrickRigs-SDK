#pragma once
#include "CoreMinimal.h"
#include "BrickSize.h"
#include "ScalableBrickReplacementMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FScalableBrickReplacementMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickSize MinSize;
    
    BRICKRIGS_API FScalableBrickReplacementMesh();
};

