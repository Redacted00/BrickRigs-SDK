#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "RampBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API URampBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    URampBrickStaticInfo();
};

