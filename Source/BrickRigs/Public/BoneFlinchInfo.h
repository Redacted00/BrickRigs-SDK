#pragma once
#include "CoreMinimal.h"
#include "BoneFlinchInfo.generated.h"

USTRUCT(BlueprintType)
struct FBoneFlinchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFlinchAngle;
    
    BRICKRIGS_API FBoneFlinchInfo();
};

