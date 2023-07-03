#include "UIFunctionLibrary.h"

FText UUIFunctionLibrary::TimespanAsText(const FTimespan& Timespan) {
    return FText::GetEmpty();
}

void UUIFunctionLibrary::OpenURLInExternalBrowser(const FString& URL) {
}

FText UUIFunctionLibrary::NumberToText(float Value, ENumericValueType ValueType, int32 MaxFractionalDigits, bool bIncludeUnits, bool bAlwaysSign) {
    return FText::GetEmpty();
}

FText UUIFunctionLibrary::GetUnitFormat(ENumericValueType ValueType) {
    return FText::GetEmpty();
}

FText UUIFunctionLibrary::GetHUDVisibilityDisplayText(EHUDVisibility InHUDVisibility) {
    return FText::GetEmpty();
}

FText UUIFunctionLibrary::GetFireModeDisplayText(EFireMode InFireMode) {
    return FText::GetEmpty();
}

float UUIFunctionLibrary::GetDefaultValueStep(ENumericValueType ValueType) {
    return 0.0f;
}

FText UUIFunctionLibrary::GetCameraModeDisplayText(ECameraMode InCameraMode) {
    return FText::GetEmpty();
}

FText UUIFunctionLibrary::GetAmmoTypeDisplayText(EAmmoType InAmmoType) {
    return FText::GetEmpty();
}

bool UUIFunctionLibrary::FilterTextForURLs(const FText& InText, FText& OutText) {
    return false;
}

bool UUIFunctionLibrary::FilterTextForProfanity(const FText& InText, FText& OutText) {
    return false;
}

float UUIFunctionLibrary::ConvertToUnrealUnits(float Value, ENumericValueType ValueType) {
    return 0.0f;
}

float UUIFunctionLibrary::ConvertToRealUnits(float Value, ENumericValueType ValueType) {
    return 0.0f;
}

FText UUIFunctionLibrary::BoolAsText(bool bValue) {
    return FText::GetEmpty();
}

UUIFunctionLibrary::UUIFunctionLibrary() {
}

