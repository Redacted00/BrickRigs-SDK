#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "HemisphereBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UHemisphereBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UHemisphereBrickStaticInfo();
};

