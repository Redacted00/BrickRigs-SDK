#include "BackgroundBlur.h"

void UBackgroundBlur::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void UBackgroundBlur::SetPadding(FMargin InPadding) {
}

void UBackgroundBlur::SetLowQualityFallbackBrush(const FSlateBrush& InBrush) {
}

void UBackgroundBlur::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

void UBackgroundBlur::SetBlurStrength(float InStrength) {
}

void UBackgroundBlur::SetBlurRadius(int32 InBlurRadius) {
}

void UBackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur) {
}

UBackgroundBlur::UBackgroundBlur() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
    this->bApplyAlphaToBlur = true;
    this->BlurStrength = 0.00f;
    this->bOverrideAutoRadiusCalculation = false;
    this->BlurRadius = 0;
}

