#include "ARObjectComponent.h"
#include "Net/UnrealNetwork.h"

void UARObjectComponent::ServerUpdatePayload_Implementation(const FARObjectUpdatePayload& NewPayload) {
}
bool UARObjectComponent::ServerUpdatePayload_Validate(const FARObjectUpdatePayload& NewPayload) {
    return true;
}



void UARObjectComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UARObjectComponent, ReplicatedPayload);
}

UARObjectComponent::UARObjectComponent() {
}

