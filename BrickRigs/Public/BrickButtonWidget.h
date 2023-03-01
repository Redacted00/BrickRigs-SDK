#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EVerticalAlignment -FallbackName=EVerticalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Geometry -FallbackName=Geometry
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EventReply -FallbackName=EventReply
#include "ButtonWidgetBase.h"
#include "EBrickUIColorStyle.h"
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
    void SetContentPadding(const FMargin& InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetContentHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InAlignment);
    
    UFUNCTION(BlueprintCallable)
    void AddContentWidget(UWidget* InWidget);
    
};

