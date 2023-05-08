// Fill out your copyright notice in the Description page of Project Settings.


#include "BrickBuilding.h"

ABrickBuilding::ABrickBuilding()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

}
void ABrickBuilding::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void ABrickBuilding::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ABrickBuilding::GetBuildingLocalBounds(FVector& OutOrigin, FVector& OutExtent) const
{
    OutOrigin = BuildingBoundsOrigin;
    OutExtent = BuildingBoundsExtent;
}