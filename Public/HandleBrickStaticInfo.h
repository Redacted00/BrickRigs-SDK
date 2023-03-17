#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "HandleBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UHandleBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UHandleBrickStaticInfo();
};

