#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "MudguardBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UMudguardBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UMudguardBrickStaticInfo();
};

