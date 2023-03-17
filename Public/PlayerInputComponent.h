#pragma once
#include "CoreMinimal.h"
#include "BaseInputComponent.h"
#include "PlayerInputComponent.generated.h"

class UInteractionComponent;

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, Within=BrickPlayerController, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UPlayerInputComponent : public UBaseInputComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInteractionComponent* FocusedBrickInteractionComponent;
    
public:
    UPlayerInputComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnReleasedScoreboard();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedMoveCamera();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedInteractTer();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedInteractSec();
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedInteractPri();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedScoreboard();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedMoveCamera();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedInteractTer();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedInteractSec();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedInteractPri();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCycleMeasurementSystem();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedChat();
    
    UFUNCTION(BlueprintCallable)
    void InteractAxis(float Val);
    
    UFUNCTION(BlueprintCallable)
    FText GetCycleMeasurementSystemValueText() const;
    
};

