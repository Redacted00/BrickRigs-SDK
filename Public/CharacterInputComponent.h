#pragma once
#include "CoreMinimal.h"
#include "PlayerPawnInputComponent.h"
#include "CharacterInputComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UCharacterInputComponent : public UPlayerPawnInputComponent {
    GENERATED_BODY()
public:
    UCharacterInputComponent();
private:
    UFUNCTION(BlueprintCallable)
    void WalkRight(float Val);
    
    UFUNCTION(BlueprintCallable)
    void WalkForward(float Val);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleCrouch();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedSprint();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedJump();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedCrouch();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSprint();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedJump();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCrouch();
    
};

