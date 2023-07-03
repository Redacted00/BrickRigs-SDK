#pragma once
#include "CoreMinimal.h"
#include "EBrickDurationUnits.h"
#include "BrickDuration.generated.h"

USTRUCT(BlueprintType)
struct FBrickDuration {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickDurationUnits Type;
    
public:
    BRICKRIGS_API FBrickDuration();
};

