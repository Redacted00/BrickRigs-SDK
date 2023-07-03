#pragma once
#include "CoreMinimal.h"
#include "PropertyListInterface.h"
#include "PropertyWidget.h"
#include "StructPropertyWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UStructPropertyWidget : public UPropertyWidget, public IPropertyListInterface {
    GENERATED_BODY()
public:
    UStructPropertyWidget();
    
    // Fix for true pure virtual functions not being implemented
};

