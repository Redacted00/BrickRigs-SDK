#pragma once
#include "CoreMinimal.h"
#include "EAmmoType.h"
#include "HUDIconWidget.h"
#include "TargetMarkerIconWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UTargetMarkerIconWidget : public UHUDIconWidget {
    GENERATED_BODY()
public:
    UTargetMarkerIconWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTargetDistance(float NewDist);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHasValidTarget(bool bNewHasValidTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFireAction(int32 NewActionIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAmmoType(EAmmoType NewType);
    
};

