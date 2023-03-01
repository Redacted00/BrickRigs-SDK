#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "MenuPageWidget.h"
#include "MenuSettingsPageWidget.generated.h"

class UPropertiesPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UMenuSettingsPageWidget : public UMenuPageWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPropertiesPanelWidget* PropertiesPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SettingsCategories;
    
public:
    UMenuSettingsPageWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddProperties();
    
};

