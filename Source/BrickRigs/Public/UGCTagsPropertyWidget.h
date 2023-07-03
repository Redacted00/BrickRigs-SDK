#pragma once
#include "CoreMinimal.h"
#include "BrickComboBoxItemParams.h"
#include "EValueChangedEventType.h"
#include "PropertyWidget.h"
#include "UGCTagsPropertyWidget.generated.h"

class UBrickComboBoxWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UUGCTagsPropertyWidget : public UPropertyWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickComboBoxWidget* TypeComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickComboBoxWidget* EraComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickComboBoxWidget* DepartmentComboBox;
    
public:
    UUGCTagsPropertyWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnTypeItemSelected(int32 Item, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnEraItemSelected(int32 Item, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnDepartmentItemSelected(int32 Item, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTypeItem(int32 Item, FBrickComboBoxItemParams& OutParams);
    
    UFUNCTION(BlueprintCallable)
    void InitializeEraItem(int32 Item, FBrickComboBoxItemParams& OutParams);
    
    UFUNCTION(BlueprintCallable)
    void InitializeDepartmentItem(int32 Item, FBrickComboBoxItemParams& OutParams);
    
};

