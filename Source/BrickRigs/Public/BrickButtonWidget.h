#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Geometry.h"
#include "Layout/Margin.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "ButtonWidgetBase.h"
#include "EBrickUIColorStyle.h"
#include "EBrickUIPaddingStyle.h"
#include "EBrickUIStyleState.h"
#include "BrickButtonWidget.generated.h"

class UNamedSlot;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UBrickButtonWidget : public UButtonWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdateContentStyle, EBrickUIColorStyle, InColorStyle, EBrickUIStyleState, InContentStyleState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocused, bool, bNewIsFocused);
    DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(FEventReply, FOnDragged, const FGeometry&, InGeometry, const FPointerEvent&, InMouseEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnClicked);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ContentPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIPaddingStyle ContentPaddingStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> ContentHorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> ContentVerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* ContentSlot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClicked OnClickedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClicked OnPressedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClicked OnReleasedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClicked OnDoubleClickedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDragged OnDraggedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocused OnIsFocusedChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateContentStyle OnUpdateContentStyleDelegate;
    
    UBrickButtonWidget();
    UFUNCTION(BlueprintCallable)
    void SetContentVerticalAlignment(TEnumAsByte<EVerticalAlignment> InAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetContentPaddingStyle(EBrickUIPaddingStyle InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetContentPadding(const FMargin& InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetContentHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InAlignment);
    
    UFUNCTION(BlueprintCallable)
    void AddContentWidget(UWidget* InWidget);
    
};

