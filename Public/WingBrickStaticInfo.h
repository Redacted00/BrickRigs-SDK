#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "WingBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UWingBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UWingBrickStaticInfo();
};

