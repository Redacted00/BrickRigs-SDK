#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "PropertiesPanelWidget.generated.h"

class UObject;
class UPropertyCategoryWidget;
class UPropertyContainerWidget;
class UPropertyWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPropertiesPanelWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPropertyCategoryWidget*> PropertyCategoryWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPropertyContainerWidget*> PropertyContainerWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPropertyWidget*> PropertyWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPropertyCategoryWidget> CategoryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPropertyContainerWidget> ContainerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPropertiesPerRow;
    
public:
    UPropertiesPanelWidget();
    UFUNCTION(BlueprintCallable)
    void UpdateProperties();
    
    UFUNCTION(BlueprintCallable)
    bool InitUserFocus();
    
    UFUNCTION(BlueprintCallable)
    void ClearProperties();
    
    UFUNCTION(BlueprintCallable)
    void AddProperties(const TArray<UObject*>& InContainers, const FGameplayTagContainer& InCategories, bool bSearchProperties);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddCategoryWidget(UPropertyCategoryWidget* Widget, int32 Index);
    
};

