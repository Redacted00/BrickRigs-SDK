#pragma once
#include "CoreMinimal.h"
#include "ScalableBrickStaticInfo.h"
#include "FloatBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UFloatBrickStaticInfo : public UScalableBrickStaticInfo {
    GENERATED_BODY()
public:
    UFloatBrickStaticInfo();
};

