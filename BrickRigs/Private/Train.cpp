#include "Train.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

void ATrain::SetTrainTrack(int32 Index) {
}

ATrain::ATrain() {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->AudioComponent = NULL;
    this->HornAudioComponent = NULL;
    this->Speed = 0.00f;
    this->TrainSound = NULL;
    this->HornSoundAttenuationRadius = 0.00f;
    this->HornSweepInterval = 1.00f;
    this->HornSweepDist = 10000.00f;
    this->MinHornDelay = 5.00f;
}

