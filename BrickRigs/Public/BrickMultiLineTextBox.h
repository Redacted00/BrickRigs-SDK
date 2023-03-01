#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=MultiLineEditableTextBox -FallbackName=MultiLineEditableTextBox
#include "BrickMultiLineTextBox.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickMultiLineTextBox : public UMultiLineEditableTextBox {
    GENERATED_BODY()
public:
    UBrickMultiLineTextBox();
};

