#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
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

