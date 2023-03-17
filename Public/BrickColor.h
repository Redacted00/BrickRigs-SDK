#pragma once
#include "CoreMinimal.h"
#include "BrickColor.generated.h"

USTRUCT(BlueprintType)
struct FBrickColor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Hue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Saturation;
    
public:
    BRICKRIGS_API FBrickColor();
};

