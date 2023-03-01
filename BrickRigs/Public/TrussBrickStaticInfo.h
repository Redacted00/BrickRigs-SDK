#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "TrussBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UTrussBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UTrussBrickStaticInfo();
};

