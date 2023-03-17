#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "ConeBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UConeBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UConeBrickStaticInfo();
};

