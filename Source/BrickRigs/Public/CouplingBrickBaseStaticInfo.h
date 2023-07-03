#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "CouplingBrickBaseStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UCouplingBrickBaseStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UCouplingBrickBaseStaticInfo();
};

