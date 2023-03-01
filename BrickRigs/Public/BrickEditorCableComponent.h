#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CableComponent -ObjectName=CableComponent -FallbackName=CableComponent
#include "BrickEditorCableComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBrickEditorCableComponent : public UCableComponent {
    GENERATED_BODY()
public:
    UBrickEditorCableComponent();
};

