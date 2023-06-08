#include "BrickBuilding.h"
#include "Net/UnrealNetwork.h"

void ABrickBuilding::OnRep_bCollapsed() {
}

void ABrickBuilding::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABrickBuilding, bCollapsed);
    DOREPLIFETIME(ABrickBuilding, CollapseAxisCompressed);
}

ABrickBuilding::ABrickBuilding() {
    this->bCollapsed = false;
    this->CollapseAxisCompressed = 0;
    this->DebrisActor = NULL;
    this->StaticMeshComponent = NULL;
    this->StaticMesh = NULL;
    this->MaxDamage = 1000.00f;
}

