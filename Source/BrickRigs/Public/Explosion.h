#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "Explosion.generated.h"

class UAudioComponent;
class UCameraShakeBase;
class UExplosiveMaterial;
class UParticleSystemComponent;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API AExplosion : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UExplosiveMaterial> ExplosiveMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float ExplosiveVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> ComponentsToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ParticleSystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> CameraShakeEffect;
    
public:
    AExplosion();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

