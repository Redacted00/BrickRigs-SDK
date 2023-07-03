#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "PropellerBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UPropellerBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PropellerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Thrust;
    
    UPropellerBrickStaticInfo();
};

