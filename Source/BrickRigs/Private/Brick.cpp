#include "Brick.h"

void UBrick::Interact_PickUp(ABrickPlayerController* OtherPC) {
}

UBrick::UBrick() {
    this->BrickPartRoot = NULL;
    this->BrickClusterRoot = NULL;
    this->BrickMaterial = NULL;
    this->BrickPattern = NULL;
    this->bGenerateLift = false;
}

