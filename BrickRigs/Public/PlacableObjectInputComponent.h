#pragma once
#include "CoreMinimal.h"
#include "BaseEditorInputComponent.h"
#include "PlacableObjectInputComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UPlacableObjectInputComponent : public UBaseEditorInputComponent {
    GENERATED_BODY()
public:
    UPlacableObjectInputComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnPressedSelectByPlacableType();
    
};

