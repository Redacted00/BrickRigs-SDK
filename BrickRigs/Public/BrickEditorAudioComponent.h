#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AudioComponent -FallbackName=AudioComponent
#include "BrickEditorComponentInterface.h"
#include "BrickEditorAudioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBrickEditorAudioComponent : public UAudioComponent, public IBrickEditorComponentInterface {
    GENERATED_BODY()
public:
    UBrickEditorAudioComponent();
    
    // Fix for true pure virtual functions not being implemented
};

