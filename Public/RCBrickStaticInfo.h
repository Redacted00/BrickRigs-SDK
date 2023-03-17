#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "RCBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API URCBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    URCBrickStaticInfo();
};

