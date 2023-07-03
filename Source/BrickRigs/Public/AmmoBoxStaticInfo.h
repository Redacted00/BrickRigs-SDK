#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ItemStaticInfo.h"
#include "AmmoBoxStaticInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UAmmoBoxStaticInfo : public UItemStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmmoCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CompatibleCalibers;
    
    UAmmoBoxStaticInfo();
};

