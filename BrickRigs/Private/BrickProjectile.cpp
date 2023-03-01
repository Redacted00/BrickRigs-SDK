#include "BrickProjectile.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "BrickProjectileMovementComponent.h"
#include "Net/UnrealNetwork.h"

void ABrickProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABrickProjectile, FirearmComponent);
    DOREPLIFETIME(ABrickProjectile, AmmoType);
    DOREPLIFETIME(ABrickProjectile, NumMergedProjectiles);
}

ABrickProjectile::ABrickProjectile() {
    this->AmmoType = EAmmoType::Default;
    this->NumMergedProjectiles = 0;
    this->SeekingTarget = NULL;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->ProjectileMovementComponent = CreateDefaultSubobject<UBrickProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
    this->TrailParticleSystem = NULL;
    this->DesintegrationParticleSystem = NULL;
    this->MeshScale = 1.00f;
    this->PenetrationCoefficient = 1.00f;
    this->HomingAcceleration = 10000.00f;
    this->MaxHomingDistance = 100000.00f;
    this->MaxHomingAngle = 90.00f;
    this->ExplosiveMaterial = NULL;
    this->ExplosiveVolume = 0.00f;
}

