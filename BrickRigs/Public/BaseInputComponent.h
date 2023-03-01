#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputComponent -FallbackName=InputComponent
#include "BaseInputComponent.generated.h"

class ABasePlayerController;
class ABrickPlayerController;

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UBaseInputComponent : public UInputComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABasePlayerController* BasePlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickPlayerController* PlayerController;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowInInputHelp: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceConsumeInput: 1;
    
    UBaseInputComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void ZoomIn(float Val);
    
    UFUNCTION(BlueprintCallable)
    void SpeedUp(float Val);
    
    UFUNCTION(BlueprintCallable)
    void OnReleasedPivotCamera();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedZoomOutStep();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedZoomInStep();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSpeedUpStep();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedSpeedDownStep();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedPivotCamera();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCycleHUDVisibility();
    
    UFUNCTION(BlueprintCallable)
    void MouseMoveUp(float Val);
    
    UFUNCTION(BlueprintCallable)
    void MouseMoveRight(float Val);
    
    UFUNCTION(BlueprintCallable)
    void LookUp(float Val);
    
    UFUNCTION(BlueprintCallable)
    void LookRight(float Val);
    
    UFUNCTION(BlueprintCallable)
    FText GetCycleHUDVisibilityValueText() const;
    
};

