#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "RedirectorBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API URedirectorBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    URedirectorBrickStaticInfo();
};

