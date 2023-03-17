#include "BrickGameState.h"
#include "LoadoutInventoryComponent.h"
#include "Net/UnrealNetwork.h"

void ABrickGameState::OnRep_NextMatchSettings() {
}

void ABrickGameState::OnRep_MatchWinner() {
}

void ABrickGameState::OnRep_MatchSettings() {
}

void ABrickGameState::OnRep_CurrentRound() {
}

void ABrickGameState::OnGameModeSubLevelLoaded() {
}

void ABrickGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABrickGameState, MatchSettings);
    DOREPLIFETIME(ABrickGameState, NextMatchSettings);
    DOREPLIFETIME(ABrickGameState, MatchRandomSeed);
    DOREPLIFETIME(ABrickGameState, MatchWinner);
    DOREPLIFETIME(ABrickGameState, CurrentRound);
}

ABrickGameState::ABrickGameState() {
    this->MatchRandomSeed = 0;
    this->DefaultTeam = NULL;
    this->ZombieTeam = NULL;
    this->DummyTeam = NULL;
    this->CurrentRound = 0;
    this->LoadoutInventoryComponent = CreateDefaultSubobject<ULoadoutInventoryComponent>(TEXT("LoadoutInventoryComponent"));
    this->ExitMatchDelay = 15.00f;
}

