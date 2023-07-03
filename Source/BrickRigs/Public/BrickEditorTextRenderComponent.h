#pragma once
#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "BrickEditorTextRenderComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBrickEditorTextRenderComponent : public UTextRenderComponent {
    GENERATED_BODY()
public:
    UBrickEditorTextRenderComponent();
};

