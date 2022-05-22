// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BrickEnums.h"
#include "Components/Border.h"
#include "BrickBorder.generated.h"

/**
 * 
 */
UCLASS()
class BRICKRIGS_API UBrickBorder : public UBorder
{
	GENERATED_BODY()


	// ~Properties
	UPROPERTY(EditAnywhere, Category = Border)
	EBrickUIBrushStyle BrushStyle;
	UPROPERTY(EditAnywhere, Category = Border)
	EBrickUIColorStyle ColorStyle;
	UPROPERTY(EditAnywhere, Category = Border)
	EBrickUIStyleState StyleState;
	// ~Properties

	public:
	// Sets the current brush style
	UFUNCTION(BlueprintCallable)
		void SetBrushStyle(EBrickUIBrushStyle NewStyle);
	// Sets the current color style
	UFUNCTION(BlueprintCallable)
		void SetColorStyle(EBrickUIColorStyle NewStyle);
	// Sets the current style state
	UFUNCTION(BlueprintCallable)
		void SetStyleState(EBrickUIStyleState NewState);
};
