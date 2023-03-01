#pragma once
#include "CoreMinimal.h"
#include "BaseEditorInputComponent.h"
#include "EditorInputComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, Within=BrickEditor, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UEditorInputComponent : public UBaseEditorInputComponent {
    GENERATED_BODY()
public:
    UEditorInputComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void MoveUp(float Val);
    
    UFUNCTION(BlueprintCallable)
    void MoveRight(float Val);
    
    UFUNCTION(BlueprintCallable)
    void MoveForward(float Val);
    
};

