#include "Garage.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

class ABrickPlayerController;

void AGarage::Interact_SpawnVehicle(ABrickPlayerController* PC) {
}

void AGarage::Interact_EnterEditor(ABrickPlayerController* PC) {
}

AGarage::AGarage() {
    this->HUDIconComponent = NULL;
    this->InteractionComponent = NULL;
    this->PlayerSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerSpawnPoint"));
}

