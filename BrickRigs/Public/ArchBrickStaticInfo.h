#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "ArchBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UArchBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UArchBrickStaticInfo();
};

