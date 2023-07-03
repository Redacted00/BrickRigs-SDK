#include "ActuatorBrick.h"
#include "Net/UnrealNetwork.h"

void UActuatorBrick::Interact_Actuate(ABrickPlayerController* OtherPC, float Val) {
}

void UActuatorBrick::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UActuatorBrick, RepActuatorState);
}

UActuatorBrick::UActuatorBrick() {
    this->InteractingPC = NULL;
    this->ActuatorMode = EActuatorMode::Accumulated;
    this->SpeedFactor = 1.00f;
    this->MaxLimit = 0.00f;
    this->MinLimit = 0.00f;
}

