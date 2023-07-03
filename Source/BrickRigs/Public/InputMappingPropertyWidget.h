#pragma once
#include "CoreMinimal.h"
#include "PropertyWidget.h"
#include "Templates/SubclassOf.h"
#include "InputMappingPropertyWidget.generated.h"

class UInputMappingKeyWidget;
class UPopupWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UInputMappingPropertyWidget : public UPropertyWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UInputMappingKeyWidget*> KeyWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInputMappingKeyWidget> KeyWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPopupWidget> BindKeyPopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxInputMappings;
    
public:
    UInputMappingPropertyWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCanAddMapping(bool bCanAdd);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddMapping();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddKeyWidget(UInputMappingKeyWidget* Widget, int32 Index);
    
};

