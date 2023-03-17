#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnPopupClosedScriptDelegate.h"
#include "PopupParams.generated.h"

class ABasePlayerController;
class UPopupWidget;

UCLASS(Blueprintable)
class BRICKRIGS_API UPopupParams : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABasePlayerController* OwningPC;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPopupWidget> PopupClass;
    
    UPopupParams();
    UFUNCTION(BlueprintCallable)
    void BindOnPopupClosedDelegate(FOnPopupClosedScript Delegate);
    
};

