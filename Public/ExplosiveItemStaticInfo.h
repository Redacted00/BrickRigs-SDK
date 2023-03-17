#pragma once
#include "CoreMinimal.h"
#include "ItemStaticInfo.h"
#include "Templates/SubclassOf.h"
#include "ThrowAnimation.h"
#include "ExplosiveItemStaticInfo.generated.h"

class UExplosiveMaterial;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UExplosiveItemStaticInfo : public UItemStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UExplosiveMaterial> ExplosiveMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosiveVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinExplosionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeDefused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThrowAnimation ThrowAnimation;
    
    UExplosiveItemStaticInfo();
};

