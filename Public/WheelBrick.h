#pragma once
#include "CoreMinimal.h"
#include "Brick.h"
#include "WheelBrick.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UWheelBrick : public UBrick {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertTankSteering;
    
public:
    UWheelBrick();
};

