#include "CameraRig_Rail.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

USplineComponent* ACameraRig_Rail::GetRailSplineComponent() {
    return NULL;
}

ACameraRig_Rail::ACameraRig_Rail() {
    this->CurrentPositionOnRail = 0.00f;
    this->bLockOrientationToRail = false;
    this->TransformComponent = CreateDefaultSubobject<USceneComponent>(TEXT("TransformComponent"));
    this->RailSplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("RailSplineComponent"));
    this->RailCameraMount = CreateDefaultSubobject<USceneComponent>(TEXT("RailCameraMount"));
}

