#pragma once
#include "CoreMinimal.h"
#include "BrickUnits.h"
#include "BrickSize.generated.h"

USTRUCT(BlueprintType)
struct FBrickSize {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickUnits X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickUnits Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickUnits Z;
    
    BRICKRIGS_API FBrickSize();
};

