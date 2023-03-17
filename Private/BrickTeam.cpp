#include "BrickTeam.h"
#include "Net/UnrealNetwork.h"

void UBrickTeam::OnRep_Score() {
}

void UBrickTeam::OnRep_MaxScore() {
}

FText UBrickTeam::GetTeamDisplayName() const {
    return FText::GetEmpty();
}

void UBrickTeam::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBrickTeam, Score);
    DOREPLIFETIME(UBrickTeam, MaxScore);
}

UBrickTeam::UBrickTeam() {
    this->Score = 0;
    this->MaxScore = 0;
}

