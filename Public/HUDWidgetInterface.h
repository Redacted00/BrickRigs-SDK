#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
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

