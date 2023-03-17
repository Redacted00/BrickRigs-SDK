#include "Firearm.h"
#include "FirearmComponent.h"

void AFirearm::ServerOnReloaded_Implementation() {
}
bool AFirearm::ServerOnReloaded_Validate() {
    return true;
}

void AFirearm::ServerOnReleasedBolt_Implementation() {
}
bool AFirearm::ServerOnReleasedBolt_Validate() {
    return true;
}

AFirearm::AFirearm() {
    this->FirearmComponent = CreateDefaultSubobject<UFirearmComponent>(TEXT("FirearmComponent"));
    this->ShellPSC = NULL;
}

