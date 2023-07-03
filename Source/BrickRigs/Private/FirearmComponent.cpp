#include "FirearmComponent.h"
#include "Net/UnrealNetwork.h"

void UFirearmComponent::OnRep_FirearmState(const FFirearmState& PrevState) {
}

void UFirearmComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFirearmComponent, FirearmState);
}

UFirearmComponent::UFirearmComponent() {
    this->FireAC = NULL;
    this->FirePSC = NULL;
    this->FireEmitter = NULL;
    this->FireSound = NULL;
}

