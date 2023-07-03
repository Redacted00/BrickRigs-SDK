#include "RaceTimer.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TextRenderComponent.h"

ARaceTimer::ARaceTimer() {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->TextRenderComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextRenderComponent"));
}

