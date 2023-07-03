#pragma once
#include "CoreMinimal.h"
#include "Components/MultiLineEditableTextBox.h"
#include "BrickMultiLineTextBox.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickMultiLineTextBox : public UMultiLineEditableTextBox {
    GENERATED_BODY()
public:
    UBrickMultiLineTextBox();
};

