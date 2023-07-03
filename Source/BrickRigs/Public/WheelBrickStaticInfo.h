#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BrickStaticInfo.h"
#include "WheelBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UWheelBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WheelRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval WheelColliderWidthRange;
    
    UWheelBrickStaticInfo();
};

