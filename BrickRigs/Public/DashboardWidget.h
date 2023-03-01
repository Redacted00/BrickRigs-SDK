#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "Templates/SubclassOf.h"
#include "DashboardWidget.generated.h"

class ABrickVehicle;
class UDashboardIconWidget;
class UDashboardSliderWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UDashboardWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickVehicle* Vehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDashboardIconWidget*> IconWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDashboardSliderWidget*> SliderWidgets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDashboardIconWidget> IconWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDashboardSliderWidget> SliderWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowResourceWarningThreshold;
    
public:
    UDashboardWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateSliderWidgetSlot(UDashboardSliderWidget* Widget, int32 Index, int32 NumSliders);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddSliderWidget(UDashboardSliderWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddIconWidget(UDashboardIconWidget* Widget, int32 Index);
    
};

