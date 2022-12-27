// Fill out your copyright notice in the Description page of Project Settings.


#include "Garage.h"

AGarage::AGarage()
{
    PlayerSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerSpawnPoint"));
    PlayerSpawnPoint->SetupAttachment(RootComponent);
}