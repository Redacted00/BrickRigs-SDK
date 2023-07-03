#include "ThrusterBrick.h"
#include "Net/UnrealNetwork.h"

void UThrusterBrick::OnRep_RepAccumulatedInput() {
}

void UThrusterBrick::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UThrusterBrick, RepAccumulatedInput);
}

UThrusterBrick::UThrusterBrick() {
    this->RepAccumulatedInput = 0;
    this->InputScale = 1.00f;
    this->bAccumulated = false;
}

