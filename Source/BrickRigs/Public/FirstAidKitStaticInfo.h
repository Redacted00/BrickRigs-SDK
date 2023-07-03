#pragma once
#include "CoreMinimal.h"
#include "ItemStaticInfo.h"
#include "FirstAidKitStaticInfo.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UFirstAidKitStaticInfo : public UItemStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumBandages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPerBandage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealTime;
    
    UFirstAidKitStaticInfo();
};

