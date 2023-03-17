#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EAmmoType.h"
#include "EFireMode.h"
#include "CurrentItemWidget.generated.h"

class UBrickImage;
class UBrickTextBlock;
class UFadingPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UCurrentItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFadingPanelWidget* FadingPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* ItemNameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* AmmoTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickImage* ItemIconImage;
    
public:
    UCurrentItemWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFireMode(EFireMode NewMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAmmoType(EAmmoType NewType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAmmo(int32 Current, int32 Ammo);
    
};

