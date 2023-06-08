#include "DragStrip.h"
#include "Net/UnrealNetwork.h"

void ADragStrip::OnRep_RightLaneState() {
}

void ADragStrip::OnRep_RaceState() {
}

void ADragStrip::OnRep_LeftLaneState() {
}

void ADragStrip::Interact_StartRace(ABrickPlayerController* PC) {
}



void ADragStrip::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADragStrip, RaceState);
    DOREPLIFETIME(ADragStrip, LeftLaneState);
    DOREPLIFETIME(ADragStrip, RightLaneState);
}

ADragStrip::ADragStrip() {
    this->RaceState = EDragRaceState::None;
    this->TreeMID = NULL;
    this->InteractionComponent = NULL;
    this->StartLine = 0.00f;
    this->NumTreeLights = 4;
    this->PerLightDelay = 1.00f;
    this->RaceTimerRight = NULL;
    this->RaceTimerLeft = NULL;
}

