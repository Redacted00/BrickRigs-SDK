#include "Garage.h"
#include "Components/SceneComponent.h"

void AGarage::Interact_SpawnVehicle(ABrickPlayerController* PC) {
}

void AGarage::Interact_Inventory(ABrickPlayerController* PC) {
}

void AGarage::Interact_EnterEditor(ABrickPlayerController* PC) {
}

AGarage::AGarage() {
    this->HUDIconComponent = NULL;
    this->InteractionComponent = NULL;
    this->PlayerSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerSpawnPoint"));
}

