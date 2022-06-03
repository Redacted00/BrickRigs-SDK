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


protected:
	// ~Properties
	UPROPERTY(EditAnywhere, Category = ColorWheel)
	FSlateBrush CursorBrush;
	// ~Properties

	public:

	// Set the selected color
	UFUNCTION(BlueprintCallable)
		void SetColor(const FLinearColor& NewColor);
};
