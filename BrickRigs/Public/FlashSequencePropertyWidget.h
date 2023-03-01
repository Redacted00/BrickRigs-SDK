#pragma once
#include "CoreMinimal.h"
#include "ObjectPropertyWidget.h"
#include "FlashSequencePropertyWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UFlashSequencePropertyWidget : public UObjectPropertyWidget {
    GENERATED_BODY()
public:
    UFlashSequencePropertyWidget();
};

