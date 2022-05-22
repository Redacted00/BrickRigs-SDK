// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BrickEnums.h"
#include "Components/TextBlock.h"
#include "BrickTextBlock.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGS_API UBrickTextBlock : public UTextBlock
{
	GENERATED_BODY()
protected:
	// ~Properties
	UPROPERTY(EditAnywhere, Category = Border)
	EBrickUIColorStyle ColorStyle;
	UPROPERTY(EditAnywhere, Category = Border)
	EBrickUIStyleState StyleState;
	UPROPERTY(EditAnywhere, Category = Border)
	EBrickUITextStyle TextStyle;
	// ~Properties

	public:
	// Sets the current color style
	UFUNCTION(BlueprintCallable)
		void SetColorStyle(EBrickUIColorStyle NewStyle);
	// Sets the current color state
	UFUNCTION(BlueprintCallable)
		void SetStyleState(EBrickUIStyleState NewState);
	// Sets the current text style
	UFUNCTION(BlueprintCallable)
		void SetTextStyle(EBrickUITextStyle NewStyle);
};
