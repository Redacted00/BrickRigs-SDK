#pragma once
#include "CoreMinimal.h"
#include "BrickComboBoxItemParams.h"
#include "EValueChangedEventType.h"
#include "PropertyWidget.h"
#include "ConnectorSpacingPropertyWidget.generated.h"

class UBrickComboBoxWidget;

UCLASS(Blueprintable, EditInlineNew)
class BRICKRIGS_API UConnectorSpacingPropertyWidget : public UPropertyWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickComboBoxWidget* ComboBoxXPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickComboBoxWidget* ComboBoxXNeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickComboBoxWidget* ComboBoxYPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickComboBoxWidget* ComboBoxYNeg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickComboBoxWidget* ComboBoxZPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickComboBoxWidget* ComboBoxZNeg;
    
public:
    UConnectorSpacingPropertyWidget();
private:
    UFUNCTION(BlueprintCallable)
    void OnComboBoxZPos(int32 Item, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnComboBoxZNeg(int32 Item, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnComboBoxYPos(int32 Item, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnComboBoxYNeg(int32 Item, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnComboBoxXPos(int32 Item, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void OnComboBoxXNeg(int32 Item, EValueChangedEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void InitializeComboBoxItem(int32 Item, FBrickComboBoxItemParams& OutParams);
    
};

