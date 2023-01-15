// Fill out your copyright notice in the Description page of Project Settings.


#include "StaticMeshProp.h"

AStaticMeshProp::AStaticMeshProp()
{
    StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"), true);
    RootComponent = StaticMeshComponent;
    StaticMeshComponent->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
    StaticMeshComponent->Mobility = EComponentMobility::Static;

    MaxDrawDistance = 50000.f;
    bIsClimbable = true;
}