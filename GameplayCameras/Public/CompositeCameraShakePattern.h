#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraShakePattern -FallbackName=CameraShakePattern
#include "CompositeCameraShakePattern.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class GAMEPLAYCAMERAS_API UCompositeCameraShakePattern : public UCameraShakePattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCameraShakePattern*> ChildPatterns;
    
    UCompositeCameraShakePattern();
};

