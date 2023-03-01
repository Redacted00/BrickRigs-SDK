#include "WorldSetupActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectionalLightComponent -FallbackName=DirectionalLightComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessComponent -FallbackName=PostProcessComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkyLightComponent -FallbackName=SkyLightComponent

AWorldSetupActor::AWorldSetupActor() {
    this->SunLightComponent = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("SunLightComponent"));
    this->SkyLightComponent = CreateDefaultSubobject<USkyLightComponent>(TEXT("SkyLightComponent"));
    this->SkyMeshComponent = NULL;
    this->CloudMeshComponent = NULL;
    this->PrecipitationPSC = NULL;
    this->ExponentialHeightFogComponent = NULL;
    this->PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
    this->AmbientAudioComponent = NULL;
    this->MapCaptureComponent = NULL;
    this->SkyMesh = NULL;
    this->SkyMeshScale = 500.00f;
    this->EnvironmentMPC = NULL;
    this->SkyMaterial = NULL;
    this->EditorSkyMaterial = NULL;
    this->TimeTransitionRate = 0.50f;
    this->WeatherTransitionTime = 15.00f;
    this->GroundCoverageTransitionTime = 30.00f;
    this->WaterHeight = -10000.00f;
    this->TimeOfDayUpdateInterval = 0.10f;
    this->ReflectionCaptureUpdateInterval = 0.50f;
    this->SunColorCurve = NULL;
    this->SunColorCurveNoAtmosphere = NULL;
    this->SkyColorCurve = NULL;
    this->HorizonColorCurve = NULL;
    this->CloudDensitySunIntensityCurve = NULL;
    this->CloudMesh = NULL;
    this->MaxCloudThickness = 10000.00f;
    this->CloudCoordinateSnappingGrid = 10000.00f;
    this->CloudScaleSnappingGrid = 10000.00f;
    this->CloudScaleFactor = 2.00f;
    this->CloudLitColorSunIntensity = 1.00f;
    this->CloudLitColorSkyIntensity = 1.00f;
    this->CloudUnlitColorDesaturation = 0.90f;
    this->CloudUnlitColorBrightness = 0.10f;
    this->MinCloudOpaqueMaterialDensity = 0.90f;
    this->CloudOpaqueMaterial = NULL;
    this->CloudPostProcessMaterial = NULL;
    this->FogDensity = 0.00f;
    this->FogHeightFalloff = 0.10f;
    this->FogStartDistance = 1000.00f;
    this->FogHeightOffset = 0.00f;
    this->FogBrightness = 0.75f;
    this->MaxLightningLength = 100000.00f;
    this->PrecipitationEmitters[0] = NULL;
    this->PrecipitationEmitters[1] = NULL;
    this->PrecipitationEmitters[2] = NULL;
    this->UnderwaterSoundMix = NULL;
    this->UnderwaterProcessMaterial = NULL;
    this->MapRenderTarget = NULL;
    this->MapCaptureSource = SCS_SceneColorHDR;
}

