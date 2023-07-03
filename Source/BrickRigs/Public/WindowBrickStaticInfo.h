#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "WindowBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UWindowBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UWindowBrickStaticInfo();
};

