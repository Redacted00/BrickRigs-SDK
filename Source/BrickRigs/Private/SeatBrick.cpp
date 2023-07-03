#include "SeatBrick.h"
#include "Net/UnrealNetwork.h"

void USeatBrick::OnRep_VehicleInput() {
}

void USeatBrick::OnRep_Character(ABrickCharacter* OldCharacter) {
}

void USeatBrick::Interact_EnterSeat(ABrickPlayerController* PC) {
}

void USeatBrick::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USeatBrick, Character);
    DOREPLIFETIME(USeatBrick, RepVehicleInput);
}

USeatBrick::USeatBrick() {
    this->Character = NULL;
}

