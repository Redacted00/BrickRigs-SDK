#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "RodBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API URodBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    URodBrickStaticInfo();
};

