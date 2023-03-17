#include "ExplosiveItem.h"
#include "Net/UnrealNetwork.h"

void AExplosiveItem::OnRep_ExplosiveState() {
}

void AExplosiveItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AExplosiveItem, ExplosiveState);
}

AExplosiveItem::AExplosiveItem() {
    this->ExplosiveState = EExplosiveItemState::Safe;
}

