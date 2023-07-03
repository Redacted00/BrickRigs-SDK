#include "SwitchBrick.h"
#include "Net/UnrealNetwork.h"

void USwitchBrick::OnRep_InteractionValue() {
}

void USwitchBrick::Interact_Switch(ABrickPlayerController* OtherPC, float Val) {
}

void USwitchBrick::Interact_Deactivate(ABrickPlayerController* OtherPC) {
}

void USwitchBrick::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USwitchBrick, InteractionValue);
}

USwitchBrick::USwitchBrick() {
    this->InteractionValue = 0;
    this->bReturnToZero = true;
}

