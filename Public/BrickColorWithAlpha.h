#pragma once
#include "CoreMinimal.h"
#include "BrickColor.h"
#include "BrickColorWithAlpha.generated.h"

USTRUCT(BlueprintType)
struct FBrickColorWithAlpha : public FBrickColor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Alpha;
    
public:
    BRICKRIGS_API FBrickColorWithAlpha();
};

