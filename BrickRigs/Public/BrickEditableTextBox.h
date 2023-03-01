#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EditableTextBox -FallbackName=EditableTextBox
#include "BrickEditableTextBox.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickEditableTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
    UBrickEditableTextBox();
};

