#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PropertyWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPropertyWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsReadOnly;
    
public:
    UPropertyWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateIsReadOnly(bool bNewReadOnly);
    
};

