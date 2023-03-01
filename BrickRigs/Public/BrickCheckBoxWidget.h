#pragma once
#include "CoreMinimal.h"
#include "DraggableButtonWidgetBase.h"
#include "EValueChangedEventType.h"
#include "BrickCheckBoxWidget.generated.h"

class UBrickTextBlock;
class UHorizontalBox;
class USpacer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UBrickCheckBoxWidget : public UDraggableButtonWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCheckedStateChanged, bool, bNewChecked, EValueChangedEventType, EventType);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* TextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ContentHorizontalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* LeftSpacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* RightSpacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsChecked;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCheckedStateChanged OnCheckedStateChangedDelegate;
    
    UBrickCheckBoxWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCheckBoxText(const FText& NewText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCheckBoxAnimation(float AnimPos);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsChecked(bool bNewChecked);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsChecked() const;
    
};

