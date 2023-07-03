#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BrickStaticInfo.h"
#include "ActuatorBrickBaseStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UActuatorBrickBaseStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> ActuationAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearActuationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearActuationRange;
    
    UActuatorBrickBaseStaticInfo();
};

