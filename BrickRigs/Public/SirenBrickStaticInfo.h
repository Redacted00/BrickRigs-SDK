#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "SirenBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API USirenBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    USirenBrickStaticInfo();
};

