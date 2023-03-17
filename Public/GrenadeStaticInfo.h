#pragma once
#include "CoreMinimal.h"
#include "ExplosiveItemStaticInfo.h"
#include "GrenadeStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UGrenadeStaticInfo : public UExplosiveItemStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuseDelay;
    
    UGrenadeStaticInfo();
};

