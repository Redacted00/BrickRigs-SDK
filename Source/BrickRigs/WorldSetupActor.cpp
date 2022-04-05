// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldSetupActor.h"


AWorldSetupActor::AWorldSetupActor()

{

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"), true);
    RootComponent->Mobility = EComponentMobility::Static;

    if (!IsRunningDedicatedServer())
    {
        SunLightComponent = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("SunLightComponent"));
        SunLightComponent->SetupAttachment(RootComponent);
        SunLightComponent->SetAbsolute(false, true, false);
        SunLightComponent->Mobility = EComponentMobility::Movable;
        SunLightComponent->bUsedAsAtmosphereSunLight = true;

        SkyLightComponent = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLightComponent"));
        SkyLightComponent->SetupAttachment(RootComponent);
        SkyLightComponent->Mobility = EComponentMobility::Movable;
        SkyLightComponent->bRealTimeCapture = true;
        // A very low resolution improves performance and hides detail, we only want an average color rather than accurate reflection details
        SkyLightComponent->CubemapResolution = 16;
        SkyLightComponent->SkyDistanceThreshold = 10.f;
        SkyLightComponent->bLowerHemisphereIsBlack = false;
#if WITH_EDITOR
        // Make sure the sky light icon doesn't show up, since they sky light will also follow the camera in the editor and would obstruct the screen
        SkyLightComponent->StaticEditorTexture = nullptr;
        SkyLightComponent->DynamicEditorTexture = nullptr;
#endif

        PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
        PostProcessComponent->SetupAttachment(RootComponent);
        PostProcessComponent->Mobility = EComponentMobility::Static;

    }

}
