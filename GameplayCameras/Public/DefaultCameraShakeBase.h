#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakeBase -FallbackName=CameraShakeBase
#include "DefaultCameraShakeBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEPLAYCAMERAS_API UDefaultCameraShakeBase : public UCameraShakeBase {
    GENERATED_BODY()
public:
    UDefaultCameraShakeBase();
};

