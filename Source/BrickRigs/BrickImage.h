// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BrickEnums.h"
#include "Components/Image.h"
#include "BrickImage.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FBrickUIIconSlot
{
	GENERATED_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = -1))
	int32 Index;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = 1))
	uint8 ColumnSpan;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = 1))
	uint8 RowSpan;

	FBrickUIIconSlot(int32 InIndex = INDEX_NONE, uint8 InColumnSpan = 1, int32 InRowSpan = 1)
		: Index(InIndex), ColumnSpan(InColumnSpan), RowSpan(InRowSpan)
	{

	}

	bool IsValid() const
	{
		return Index >= 0;
	}
};

UCLASS()
class BRICKRIGS_API UBrickImage : public UImage
{
	GENERATED_BODY()
public:
	// ~Properties
	UPROPERTY(EditAnywhere, Category = Image)
	EBrickUIColorStyle ColorStyle;
	UPROPERTY(EditAnywhere, Category = Image)
	EBrickUIStyleState StyleState;
	UPROPERTY(EditAnywhere, Category = Image)
	EBrickUIIconAtlas IconAtlas;
	UPROPERTY(EditAnywhere, Category = Image)
	FBrickUIIconSlot IconSlot;
	UPROPERTY(EditAnywhere, Category = Image)
	bool bIsThrobber;
	// ~Properties

	// Sets the current color style
	UFUNCTION(BlueprintCallable)
		void SetColorStyle(EBrickUIColorStyle NewStyle);
	// Sets the current color state
	UFUNCTION(BlueprintCallable)
		void SetStyleState(EBrickUIStyleState NewState);
	// Set whether this image should appear as a throbber
	UFUNCTION(BlueprintCallable)
		void SetIsThrobber(bool bNewIsThrobber);
	// Sets the icon atlas to display
	UFUNCTION(BlueprintCallable)
		void SetIconAtlas(EBrickUIIconAtlas NewAtlas);
	// Sets the icon atlas slot
	UFUNCTION(BlueprintCallable)
		void SetIconSlot(FBrickUIIconSlot NewSlot);
	// Sets the atlas and slot at the same time
	UFUNCTION(BlueprintCallable)
		void SetIconAtlasAndSlot(EBrickUIIconAtlas NewAtlas, FBrickUIIconSlot NewSlot);

};
