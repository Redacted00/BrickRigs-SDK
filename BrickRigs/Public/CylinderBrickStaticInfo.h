#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "CylinderBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UCylinderBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UCylinderBrickStaticInfo();
};

