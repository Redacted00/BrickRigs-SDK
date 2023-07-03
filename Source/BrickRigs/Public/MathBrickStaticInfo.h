#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "MathBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UMathBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UMathBrickStaticInfo();
};

