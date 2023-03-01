#pragma once
#include "CoreMinimal.h"
#include "RecastGraphWrapper.generated.h"

class ARecastNavMesh;

USTRUCT(BlueprintType)
struct AIMODULE_API FRecastGraphWrapper {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARecastNavMesh* RecastNavMeshActor;
    
public:
    FRecastGraphWrapper();
};

