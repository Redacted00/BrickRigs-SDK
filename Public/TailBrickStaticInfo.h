#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "TailBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UTailBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UTailBrickStaticInfo();
};

