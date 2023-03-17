#include "FuelTank.h"
#include "Net/UnrealNetwork.h"


void AFuelTank::OnRep_bHasExploded() {
}

void AFuelTank::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFuelTank, bHasExploded);
}

AFuelTank::AFuelTank() {
    this->bHasExploded = false;
    this->MaxDamage = 3.00f;
    this->ExplodedStaticMesh = NULL;
    this->FuelType = NULL;
    this->FuelVolume = 1000.00f;
    this->LeakEmitter = NULL;
}

