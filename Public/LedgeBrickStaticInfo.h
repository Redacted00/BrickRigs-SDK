#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "LedgeBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API ULedgeBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    ULedgeBrickStaticInfo();
};

