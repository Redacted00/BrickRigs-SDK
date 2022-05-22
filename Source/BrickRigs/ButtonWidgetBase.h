// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BrickEnums.h"
#include "BrickBorder.h"
#include "Blueprint/UserWidget.h"
#include "ButtonWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGS_API UButtonWidgetBase : public UUserWidget
{
	GENERATED_BODY()
public:
	// ~Widgets
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	UBrickBorder* Border;
	// ~Widgets


	// ~Properties
	UPROPERTY(EditAnywhere, Category = Button)
	EBrickUIColorStyle ColorStyle;
	UPROPERTY(EditAnywhere, Category = Button)
	EBrickUIBrushStyle BrushStyle;
	// Whether the button should only be drawn while it is visible
	UPROPERTY(EditAnywhere, Category = Button)
	bool bHiddenWhileUnfocused;
	// ~Properties

	UFUNCTION(BlueprintCallable, Category = Button)
		void SetColorStyle(EBrickUIColorStyle NewColorStyle);
	UFUNCTION(BlueprintCallable, Category = Button)
		void SetBrushStyle(EBrickUIBrushStyle NewBrushStyle);
	// Can be used to mark the button as focused or unfocused manually
	UFUNCTION(BlueprintCallable, Category = Button)
		void SetCustomFocus(bool bNewUseCustomFocus, bool bNewFocused = false);
	UFUNCTION(BlueprintCallable, Category = Button)
		void SetHiddenWhileUnfocused(bool bNewHidden);

	// Calls the delegate to update the content style
	UFUNCTION(BlueprintCallable)
		void UpdateContentStyle();
	// Get the buttons current style state
	UFUNCTION(BlueprintPure)
		EBrickUIStyleState GetButtonStyleState() const;
	// Get the currently desired style state for content
	UFUNCTION(BlueprintPure)
		EBrickUIStyleState GetContentStyleState() const;
protected:
	// Can be implemented to customize the style or update content widgets
	UFUNCTION(BlueprintNativeEvent)
		void OnUpdateContentStyle(EBrickUIColorStyle InColorStyle, EBrickUIStyleState InStyleState);
};
