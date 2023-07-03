#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HUDWidgetInterface.generated.h"

class UGameOverlayWidget;

UINTERFACE(Blueprintable)
class BRICKRIGS_API UHUDWidgetInterface : public UInterface {
    GENERATED_BODY()
};

class BRICKRIGS_API IHUDWidgetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool AddGameOverlayWidget(UGameOverlayWidget* Widget);
    
};

