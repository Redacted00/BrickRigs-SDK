#include "GravelSilo.h"
#include "Net/UnrealNetwork.h"

void AGravelSilo::OnRep_bIsSiloOpen() {
}

void AGravelSilo::Interact_OpenSilo(ABrickPlayerController* PC) {
}

void AGravelSilo::Interact_CloseSilo(ABrickPlayerController* PC) {
}

void AGravelSilo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGravelSilo, bIsSiloOpen);
}

AGravelSilo::AGravelSilo() {
    this->bIsSiloOpen = false;
    this->InteractionComponent = NULL;
    this->OutletPSC = NULL;
    this->OutletEmitter = NULL;
    this->ParticleMesh = NULL;
    this->ParticlesPerSecond = 10.00f;
    this->MaxOffset = 30.00f;
}

