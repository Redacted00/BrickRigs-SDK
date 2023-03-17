#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
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

