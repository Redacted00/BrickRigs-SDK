#include "BrickPlayerState.h"
#include "Net/UnrealNetwork.h"

void ABrickPlayerState::OnRep_TeamId() {
}

void ABrickPlayerState::OnRep_Money(float PrevValue) {
}

void ABrickPlayerState::OnRep_Kills() {
}

void ABrickPlayerState::OnRep_IsTeamLeader() {
}

void ABrickPlayerState::OnRep_IsAlive() {
}

void ABrickPlayerState::OnRep_IsAdmin() {
}

void ABrickPlayerState::OnRep_Deaths() {
}

void ABrickPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABrickPlayerState, bIsAdmin);
    DOREPLIFETIME(ABrickPlayerState, TeamID);
    DOREPLIFETIME(ABrickPlayerState, bIsTeamLeader);
    DOREPLIFETIME(ABrickPlayerState, Money);
    DOREPLIFETIME(ABrickPlayerState, Kills);
    DOREPLIFETIME(ABrickPlayerState, Deaths);
    DOREPLIFETIME(ABrickPlayerState, bIsAlive);
}

ABrickPlayerState::ABrickPlayerState() {
    this->InactiveCharacter = NULL;
    this->bIsAdmin = false;
    this->bIsTeamLeader = false;
    this->Money = 0.00f;
    this->Kills = 0;
    this->Deaths = 0;
    this->bIsAlive = false;
}

