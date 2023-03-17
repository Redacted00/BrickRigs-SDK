#pragma once
#include "CoreMinimal.h"
#include "BaseInputComponent.h"
#include "PropertyContainerInputComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BRICKRIGS_API UPropertyContainerInputComponent : public UBaseInputComponent {
    GENERATED_BODY()
public:
    UPropertyContainerInputComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnPressedSelectByValue();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedPickValue();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedPasteValue();
    
    UFUNCTION(BlueprintCallable)
    void OnPressedCopyValue();
    
    UFUNCTION(BlueprintCallable)
    bool GetSelectByValueEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPickValueEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPasteValueEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCopyValueEnabled() const;
    
};

