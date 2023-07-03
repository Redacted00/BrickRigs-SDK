#pragma once
#include "CoreMinimal.h"
#include "WheelBrickStaticInfo.h"
#include "TrainWheelBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UTrainWheelBrickStaticInfo : public UWheelBrickStaticInfo {
    GENERATED_BODY()
public:
    UTrainWheelBrickStaticInfo();
};

