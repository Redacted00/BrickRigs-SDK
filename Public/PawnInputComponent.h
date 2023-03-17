#pragma once
#include "CoreMinimal.h"
#include "BaseInputComponent.h"
#include "PawnInputComponent.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UPawnInputComponent : public UBaseInputComponent {
    GENERATED_BODY()
public:
    UPawnInputComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTappedToggleInvincible();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedSlowMotion();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedSlomoSpeedUp();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedSlomoSpeedDown();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedScrapAllVehicles();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedRecoverDummies();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedRecover();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedOpenVehicle();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedFreeCamera();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedDestroyPawn();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedCycleVehicles();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedCycleCharacters();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedToggleInvincible();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedSlowMotion();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedSlomoSpeedUp();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedSlomoSpeedDown();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedScrapAllVehicles();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedRecoverDummies();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedRecover();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedOpenVehicle();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedMap();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedInventory();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedFreeCamera();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedDestroyPawn();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedCycleVehicles();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedCycleCharacters();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedToggleInvincible();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSlowMotion();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSlomoSpeedUp();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSlomoSpeedDown();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedScrapAllVehicles();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedRecoverDummies();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedRecover();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedProjectileCamera();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedOpenVehicle();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedMap();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedInventory();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedFreeCamera();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedDestroyPawn();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCycleVehicles();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCycleCharacters();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldToggleInvincible();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldSlowMotion();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldSlomoSpeedUp();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldSlomoSpeedDown();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldScrapAllVehicles();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldRecoverDummies();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldRecover();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldOpenVehicle();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldFreeCamera();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldDestroyPawn();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldCycleVehicles();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldCycleCharacters();
    
    UFUNCTION(BlueprintCallable)
    bool GetInventoryEnabled(bool bInSecondaryAction) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetDestroyPawnEnabled(bool bInSecondaryAction) const;
    
};

