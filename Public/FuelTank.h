#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "ContactModifyInterface.h"
#include "ProjectileImpactInterface.h"
#include "StaticMeshProp.h"
#include "Templates/SubclassOf.h"
#include "FuelTank.generated.h"

class UExplosiveMaterial;
class UParticleSystem;
class UStaticMesh;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API AFuelTank : public AStaticMeshProp, public IProjectileImpactInterface, public IContactModifyInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bHasExploded, meta=(AllowPrivateAccess=true))
    bool bHasExploded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ExplodedStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UExplosiveMaterial> FuelType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* LeakEmitter;
    
public:
    AFuelTank();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldSpawnLeakOnHit(const FHitResult& Hit);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_bHasExploded();
    
    
    // Fix for true pure virtual functions not being implemented
};

