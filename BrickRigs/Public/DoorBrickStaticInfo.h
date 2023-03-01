#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "DoorBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UDoorBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UDoorBrickStaticInfo();
};

