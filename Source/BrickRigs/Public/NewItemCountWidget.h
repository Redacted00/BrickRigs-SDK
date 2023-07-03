#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NewItemCountWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UNewItemCountWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UNewItemCountWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateNumItems(int32 NewNum);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNumNewItems(int32 NewNum);
    
};

