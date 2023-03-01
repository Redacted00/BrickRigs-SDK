#pragma once
#include "CoreMinimal.h"
#include "DestructibleSpecialHierarchyDepths.generated.h"

USTRUCT(BlueprintType)
struct FDestructibleSpecialHierarchyDepths {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SupportDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumFractureDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebrisDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EssentialDepth;
    
    APEXDESTRUCTION_API FDestructibleSpecialHierarchyDepths();
};

