#pragma once
#include "CoreMinimal.h"
#include "AttachmentStaticInfo.h"
#include "MuzzleEffect.h"
#include "BarrelStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UBarrelStaticInfo : public UAttachmentStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMuzzleEffect MuzzleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RangeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageScale;
    
    UBarrelStaticInfo();
};

