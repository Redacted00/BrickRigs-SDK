#pragma once
#include "CoreMinimal.h"
#include "PawnInputComponent.h"
#include "PlayerPawnInputComponent.generated.h"

class ABaseCharacter;
class ABrickCharacter;
class ABrickVehicle;

UCLASS(Abstract, Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UPlayerPawnInputComponent : public UPawnInputComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABaseCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickCharacter* BrickCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickVehicle* Vehicle;
    
public:
    UPlayerPawnInputComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTappedKill();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedCycleSlots();
    
    UFUNCTION(BlueprintCallable)
    void OnTappedCycleExplosives();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedKill();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedFire();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedCycleSlots();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedCycleExplosives();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedAim();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedUnequipItem();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedThrowItem();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSpecialSlot();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSecondarySlot();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedReload();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedPrimarySlot();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedKill();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedFire();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCycleSlots();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCycleFireMode();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCycleExplosives();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedAim();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldKill();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldCycleSlots();
    
    UFUNCTION(BlueprintCallable)
    void OnHeldCycleExplosives();
    
};

