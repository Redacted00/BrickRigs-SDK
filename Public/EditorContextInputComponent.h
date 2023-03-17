#pragma once
#include "CoreMinimal.h"
#include "BaseEditorInputComponent.h"
#include "EditorContextInputComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UEditorContextInputComponent : public UBaseEditorInputComponent {
    GENERATED_BODY()
public:
    UEditorContextInputComponent();
};

