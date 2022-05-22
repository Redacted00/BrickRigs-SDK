// Fill out your copyright notice in the Description page of Project Settings.


#include "ButtonWidgetBase.h"

void UButtonWidgetBase::SetColorStyle(EBrickUIColorStyle NewColorStyle)
{
}

void UButtonWidgetBase::SetBrushStyle(EBrickUIBrushStyle NewBrushStyle)
{
}

void UButtonWidgetBase::SetCustomFocus(bool bNewUseCustomFocus, bool bNewFocused)
{
}

void UButtonWidgetBase::SetHiddenWhileUnfocused(bool bNewHidden)
{
}

void UButtonWidgetBase::UpdateContentStyle()
{
}

EBrickUIStyleState UButtonWidgetBase::GetButtonStyleState() const
{
	return {};
}

EBrickUIStyleState UButtonWidgetBase::GetContentStyleState() const
{
	return {};
}

void UButtonWidgetBase::OnUpdateContentStyle_Implementation(EBrickUIColorStyle InColorStyle,
                                                            EBrickUIStyleState InStyleState)
{
}

