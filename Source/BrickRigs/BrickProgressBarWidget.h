// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BrickEnums.h"
#include "Blueprint/UserWidget.h"
#include "BrickProgressBarWidget.generated.h"

/**
 * 
 */

UCLASS()
class BRICKRIGS_API UBrickProgressBarWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	// ~Properties
	UPROPERTY(EditAnywhere, Category = ProgressBar)
	EBrickUIColorStyle ColorStyle;
	UPROPERTY(EditAnywhere, Category = ProgressBar, Meta = (UIMin = 0.f, UIMax = 1.f))
	float Progress;
	UPROPERTY(EditAnywhere, Category = ProgressBar)
	bool bIsMarquee;
	// ~Properties

	public:
	// Changes the color style of the progress bar
	UFUNCTION(BlueprintCallable)
		void SetColorStyle(EBrickUIColorStyle InColorStyle);
	// Sets the displayed progress, 0-1
	UFUNCTION(BlueprintCallable)
		void SetProgress(float NewProgress);
	// Enables or disables the marquee style
	UFUNCTION(BlueprintCallable)
		void SetIsMarquee(bool bNewMarquee);

protected:
	// ~Blueprint Interface
	UFUNCTION(BlueprintImplementableEvent)
		void UpdateColorStyle(EBrickUIColorStyle InColorStyle);
	UFUNCTION(BlueprintImplementableEvent)
		void UpdateProgress(float NewProgress);
	UFUNCTION(BlueprintImplementableEvent)
		void UpdateIsMarquee(bool bNewMarquee);
	// ~Blueprint Interface
};
