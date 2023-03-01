#pragma once
#include "CoreMinimal.h"
#include "BrickStaticInfo.h"
#include "ELightBrickDirection.h"
#include "LightBrickStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API ULightBrickStaticInfo : public UBrickStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBrightness;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 LightDirectionFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELightBrickDirection DefaultLightDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultLightConeAngle;
    
    ULightBrickStaticInfo();
};

