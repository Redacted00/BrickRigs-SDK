#pragma once
#include "CoreMinimal.h"
#include "ScalableBrickStaticInfo.h"
#include "DisplayBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UDisplayBrickStaticInfo : public UScalableBrickStaticInfo {
    GENERATED_BODY()
public:
    UDisplayBrickStaticInfo();
};

