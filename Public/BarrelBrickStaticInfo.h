#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "BarrelBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UBarrelBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UBarrelBrickStaticInfo();
};

