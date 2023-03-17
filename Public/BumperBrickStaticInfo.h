#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "BumperBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UBumperBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UBumperBrickStaticInfo();
};

