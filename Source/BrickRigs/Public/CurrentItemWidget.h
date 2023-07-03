#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EAmmoType.h"
#include "EFireMode.h"
#include "CurrentItemWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UCurrentItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UCurrentItemWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItemName(const FText& NewName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFireMode(EFireMode NewMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAmmoType(EAmmoType NewType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAmmo(int32 Current, int32 Capacity, int32 Ammo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOut(bool bImmediate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeIn();
    
};

