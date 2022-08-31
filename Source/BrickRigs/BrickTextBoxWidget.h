// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BrickEnums.h"
#include "BrickButtonWidget.h"
#include "Blueprint/UserWidget.h"
#include "BrickTextBoxWidget.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGS_API UBrickTextBoxWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTextBoxChanged, const FText&, NewText, EValueChangedEventType, EventType);
	
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional))
	UBrickButtonWidget* ShowPasswordButton;

	UPROPERTY(BlueprintAssignable)
	FOnTextBoxChanged OnTextChangedDelegate;

	UPROPERTY(EditAnywhere, Category = TextBox, meta = (ClampMin = 0))
	int32 MaxTextLength;
	UPROPERTY(EditAnywhere, Category = TextBox)
	bool bAllowMultiLine;
	UPROPERTY(EditAnywhere, Category = TextBox)
	bool bAutoUpdateFocus;
	UPROPERTY(EditAnywhere, Category = TextBox)
	bool bIsPassword;

	UFUNCTION(BlueprintCallable)
	 void SetColorStyle(EBrickUIColorStyle InColorStyle);
	UFUNCTION(BlueprintCallable)
		void SetBrushStyle(EBrickUIBrushStyle InBrushStyle);
	UFUNCTION(BlueprintCallable)
		void SetTextStyle(EBrickUITextStyle InTextStyle);
	UFUNCTION(BlueprintCallable)
		void SetJustification(TEnumAsByte<ETextJustify::Type> NewJustification);
	UFUNCTION(BlueprintCallable)
		void SetText(const FText& InText);
	UFUNCTION(BlueprintPure)
		FText GetText() const;
	UFUNCTION(BlueprintCallable)
		void SetHintText(const FText& InText);
	UFUNCTION(BlueprintCallable)
		void SetMaxTextLength(int32 InMaxLength);
	UFUNCTION(BlueprintCallable)
		void SetAllowMultiLine(bool bInAllowMultiLine);
	UFUNCTION(BlueprintCallable)
		void SetIsPassword(bool bNewIsPassword);
	UFUNCTION(BlueprintCallable)
		void SetPasswordVisible(bool bNewVisible);
	UFUNCTION(BlueprintPure)
		bool IsPasswordVisible() const;
	UFUNCTION(BlueprintCallable)
		void TogglePasswordVisible();
	UFUNCTION(BlueprintPure)
		bool IsTyping() const;
	UFUNCTION(BlueprintCallable)
		void StartTyping(bool bSelectAllText = false);

	UFUNCTION(BlueprintImplementableEvent)
		void UpdateIsPassword(bool bNewIsPassword);
	UFUNCTION(BlueprintImplementableEvent)
		void UpdatePasswordVisible(bool bNewVisible);
};
