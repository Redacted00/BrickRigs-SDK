#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "FireExtinguisherProperties.h"
#include "PumpBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UPumpBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFireExtinguisherProperties ExtinguisherProperties;
    
    UPumpBrickStaticInfo();
};

