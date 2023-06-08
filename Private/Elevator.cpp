#include "Elevator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "Net/UnrealNetwork.h"

void AElevator::OnRep_ReplicatedTargetHeight() {
}

void AElevator::Interact_StopElevator(ABrickPlayerController* PC) {
}

void AElevator::Interact_ElevatorUp(ABrickPlayerController* PC) {
}

void AElevator::Interact_ElevatorDown(ABrickPlayerController* PC) {
}


void AElevator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AElevator, ReplicatedTargetHeight);
}

AElevator::AElevator() {
    this->ReplicatedTargetHeight = 0;
    this->ElevatorSpeed = 0.00f;
    this->ElevatorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ElevatorMesh"));
    this->AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("AudioComponent"));
    this->BaseIC = NULL;
    this->TopIC = NULL;
    this->PlatformIC = NULL;
    this->MaxHeight = 1000.00f;
    this->MaxSpeed = 100.00f;
    this->Acceleration = 128.00f;
}

