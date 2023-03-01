#include "ARPlaneComponent.h"
#include "Net/UnrealNetwork.h"

void UARPlaneComponent::SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode) {
}

void UARPlaneComponent::SetObjectClassificationDebugColors(const TMap<EARObjectClassification, FLinearColor>& InColors) {
}

void UARPlaneComponent::ServerUpdatePayload_Implementation(const FARPlaneUpdatePayload& NewPayload) {
}
bool UARPlaneComponent::ServerUpdatePayload_Validate(const FARPlaneUpdatePayload& NewPayload) {
    return true;
}



TMap<EARObjectClassification, FLinearColor> UARPlaneComponent::GetObjectClassificationDebugColors() {
    return TMap<EARObjectClassification, FLinearColor>();
}

void UARPlaneComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UARPlaneComponent, ReplicatedPayload);
}

UARPlaneComponent::UARPlaneComponent() {
}

