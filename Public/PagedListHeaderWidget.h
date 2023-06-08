#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EMeasurementSystem.h"
#include "PagedListHeaderWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPagedListHeaderWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPagedListHeaderWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePrice(float InPrice, float InMoney);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateNumObjects(int32 InNumObjects, int32 InMaxNumObjects, int32 InNumHiddenObjects, int32 InNumObjectsWithAerodynamics);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMass(float InMass, float InMaxMass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEntry(const FText& InTitleText, bool bInHasUnsavedChanges);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDimensions(const FVector& InDimensions, const FVector& InMaxDimensions);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMeasurementSystemChanged(EMeasurementSystem NewSystem);
    
};

