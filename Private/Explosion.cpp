#include "Explosion.h"
#include "Net/UnrealNetwork.h"

void AExplosion::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AExplosion, ExplosiveMaterial);
    DOREPLIFETIME(AExplosion, ExplosiveVolume);
}

AExplosion::AExplosion() {
    this->ExplosiveMaterial = NULL;
    this->ExplosiveVolume = 0.00f;
    this->DamageCauser = NULL;
    this->ParticleSystemComponent = NULL;
    this->AudioComponent = NULL;
    this->CameraShakeEffect = NULL;
}

