#include "ARPoseComponent.h"
#include "Net/UnrealNetwork.h"

void UARPoseComponent::SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode) {
}

void UARPoseComponent::ServerUpdatePayload_Implementation(const FARPoseUpdatePayload& NewPayload) {
}
bool UARPoseComponent::ServerUpdatePayload_Validate(const FARPoseUpdatePayload& NewPayload) {
    return true;
}



void UARPoseComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UARPoseComponent, ReplicatedPayload);
}

UARPoseComponent::UARPoseComponent() {
}

