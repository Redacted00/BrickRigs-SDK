#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DestructibleInstance.generated.h"

USTRUCT(BlueprintType)
struct FDestructibleInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform InstanceTransform;
    
    BRICKRIGS_API FDestructibleInstance();
};

