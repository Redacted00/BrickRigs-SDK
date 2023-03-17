#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EHUDIconDomain.h"
#include "Templates/SubclassOf.h"
#include "HUDIconPanelWidget.generated.h"

class UHUDIconComponent;
class UHUDIconContainerWidget;
class UHUDIconWidget;
class UInteractionWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UHUDIconPanelWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<UHUDIconComponent*, UHUDIconContainerWidget*> HUDIconComponentsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHUDIconWidget*> UnusedHUDIconWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHUDIconContainerWidget*> UnusedContainerWidgets;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHUDIconContainerWidget> IconContainerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UInteractionWidget> InteractionWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHUDIconDomain IconDomain;
    
    UHUDIconPanelWidget();
};

