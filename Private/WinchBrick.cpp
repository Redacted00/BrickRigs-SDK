#include "WinchBrick.h"
#include "Net/UnrealNetwork.h"

void UWinchBrick::OnRep_RepRopeLength() {
}

void UWinchBrick::OnRep_AttachTarget(const FWinchAttachTarget& PrevAttachTarget) {
}

void UWinchBrick::Interact_DetachWinch(ABrickPlayerController* OtherPC) {
}

void UWinchBrick::Interact_AttachWinch(ABrickPlayerController* OtherPC) {
}

void UWinchBrick::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWinchBrick, AttachTarget);
    DOREPLIFETIME(UWinchBrick, RepRopeLength);
}

UWinchBrick::UWinchBrick() {
    this->RepRopeLength = 0.00f;
    this->WinchSpeed = 0.00f;
}

