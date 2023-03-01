#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "DestructibleInstance.generated.h"

USTRUCT(BlueprintType)
struct FDestructibleInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform InstanceTransform;
    
    BRICKRIGS_API FDestructibleInstance();
};

