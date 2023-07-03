#pragma once
#include "CoreMinimal.h"
#include "BuildingMesh.generated.h"

class UDestructibleInstanceTemplate;

USTRUCT(BlueprintType)
struct FBuildingMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDestructibleInstanceTemplate* Template;
    
    BRICKRIGS_API FBuildingMesh();
};

