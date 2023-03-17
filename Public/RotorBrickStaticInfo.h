#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "RotorBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API URotorBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    URotorBrickStaticInfo();
};

