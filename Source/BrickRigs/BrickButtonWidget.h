// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BrickEnums.h"
#include "ButtonWidgetBase.h"
#include "BrickButtonWidget.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGS_API UBrickButtonWidget : public UButtonWidgetBase
{
	GENERATED_BODY()
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnClicked);
	DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(FEventReply, FOnDragged, const FGeometry&, InGeometry, const FPointerEvent&, InMouseEvent);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocused, bool, bNewIsFocused);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUpdateContentStyle, EBrickUIColorStyle, InColorStyle, EBrickUIStyleState, InContentStyleState);

	// ~Properties
	UPROPERTY(EditAnywhere, Category = Button)
	FMargin ContentPadding;
	UPROPERTY(EditAnywhere, Category = Button)
	TEnumAsByte<EHorizontalAlignment> ContentHorizontalAlignment;
	UPROPERTY(EditAnywhere, Category = Button)
	TEnumAsByte<EVerticalAlignment> ContentVerticalAlignment;
	// ~Properties

	// ~Widgets
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	UNamedSlot* ContentSlot;
	// ~Widgets

	// ~Delegates
	UPROPERTY(BlueprintAssignable)
	FOnClicked OnClickedDelegate;
	UPROPERTY(BlueprintAssignable)
	FOnClicked OnPressedDelegate;
	UPROPERTY(BlueprintAssignable)
	FOnClicked OnReleasedDelegate;
	UPROPERTY(BlueprintAssignable)
	FOnClicked OnDoubleClickedDelegate;
	UPROPERTY(BlueprintAssignable)
	FOnFocused OnIsFocusedChangedDelegate;
	UPROPERTY(BlueprintAssignable)
	FOnUpdateContentStyle OnUpdateContentStyleDelegate;
	// ~Delegates

	UFUNCTION(BlueprintCallable)
		void AddContentWidget(UWidget* InWidget);
	UFUNCTION(BlueprintCallable)
		void SetContentPadding(const FMargin& InPadding);
	UFUNCTION(BlueprintCallable)
		void SetContentHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InAlignment);
	UFUNCTION(BlueprintCallable)
		void SetContentVerticalAlignment(TEnumAsByte<EVerticalAlignment> InAlignment);
};
