// Fill out your copyright notice in the Description page of Project Settings.


#include "BrickTextBoxWidget.h"



void UBrickTextBoxWidget::SetBrushStyle(EBrickUIBrushStyle InBrushStyle)
{
}

void UBrickTextBoxWidget::SetTextStyle(EBrickUITextStyle InTextStyle)
{
}

void UBrickTextBoxWidget::SetJustification(TEnumAsByte<ETextJustify::Type> NewJustification)
{
}

void UBrickTextBoxWidget::SetText(const FText& InText)
{
}

FText UBrickTextBoxWidget::GetText() const
{
	return {};
}


void UBrickTextBoxWidget::SetHintText(const FText& InText)
{
}

void UBrickTextBoxWidget::SetMaxTextLength(int32 InMaxLength)
{
}

void UBrickTextBoxWidget::SetAllowMultiLine(bool bInAllowMultiLine)
{
}

void UBrickTextBoxWidget::SetIsPassword(bool bNewIsPassword)
{
}

void UBrickTextBoxWidget::SetPasswordVisible(bool bNewVisible)
{
}

bool UBrickTextBoxWidget::IsPasswordVisible() const
{
	return false;
}


void UBrickTextBoxWidget::TogglePasswordVisible()
{
}

bool UBrickTextBoxWidget::IsTyping() const
{
	return false;
}


void UBrickTextBoxWidget::StartTyping(bool bSelectAllText)
{
}

void UBrickTextBoxWidget::SetColorStyle(EBrickUIColorStyle InColorStyle)
{
}
