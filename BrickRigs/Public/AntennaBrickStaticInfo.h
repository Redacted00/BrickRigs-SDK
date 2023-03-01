#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "AntennaBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UAntennaBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UAntennaBrickStaticInfo();
};

