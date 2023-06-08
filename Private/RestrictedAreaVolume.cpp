#include "RestrictedAreaVolume.h"

void ARestrictedAreaVolume::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ARestrictedAreaVolume::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

ARestrictedAreaVolume::ARestrictedAreaVolume() {
    this->bInvertVolume = false;
    this->KillDelay = 5.00f;
}

