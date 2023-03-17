#pragma once
#include "CoreMinimal.h"
#include "ItemAimParams.generated.h"

USTRUCT(BlueprintType)
struct FItemAimParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinEyeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Magnification;
    
    BRICKRIGS_API FItemAimParams();
};

