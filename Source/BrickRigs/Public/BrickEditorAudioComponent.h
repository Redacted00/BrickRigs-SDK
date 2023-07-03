#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "BrickEditorComponentInterface.h"
#include "BrickEditorAudioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBrickEditorAudioComponent : public UAudioComponent, public IBrickEditorComponentInterface {
    GENERATED_BODY()
public:
    UBrickEditorAudioComponent();
    
    // Fix for true pure virtual functions not being implemented
};

