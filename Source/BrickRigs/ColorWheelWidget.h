// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BrickEnums.h"
#include "Blueprint/UserWidget.h"
#include "ColorWheelWidget.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGS_API UColorWheelWidget : public UUserWidget
{
	GENERATED_BODY()
private:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FColorChanged, const FLinearColor&, NewColor, EValueChangedEventType, EventType);

protected:
	// ~Properties
	UPROPERTY(EditAnywhere, Category = ColorWheel)
	FSlateBrush CursorBrush;
	// ~Properties

	public:
	// ~Delegates
	UPROPERTY(BlueprintAssignable)
	FColorChanged OnColorChangedDelegate;
	// ~Delegates

	// Set the selected color
	UFUNCTION(BlueprintCallable)
		void SetColor(const FLinearColor& NewColor);
};
