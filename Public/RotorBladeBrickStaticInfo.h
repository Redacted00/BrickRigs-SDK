#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "RotorBladeBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API URotorBladeBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    URotorBladeBrickStaticInfo();
};

