#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUDWidgetInterface.h"
#include "SpawnScreenWidget.generated.h"

class UMapWidget;
class USpawnPointPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API USpawnScreenWidget : public UUserWidget, public IHUDWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMapWidget* MapWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpawnPointPanelWidget* SpawnPointPanel;
    
public:
    USpawnScreenWidget();
    
    // Fix for true pure virtual functions not being implemented
};

