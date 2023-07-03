#include "BrickConnection.h"
#include "Net/UnrealNetwork.h"

void UBrickConnection::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBrickConnection, BrickID0);
    DOREPLIFETIME(UBrickConnection, BrickID1);
    DOREPLIFETIME(UBrickConnection, OtherVehicle);
    DOREPLIFETIME(UBrickConnection, Params);
}

UBrickConnection::UBrickConnection() {
    this->Brick0 = NULL;
    this->Brick1 = NULL;
    this->OtherVehicle = NULL;
}

