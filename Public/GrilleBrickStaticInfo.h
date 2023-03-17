#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "GrilleBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UGrilleBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UGrilleBrickStaticInfo();
};

