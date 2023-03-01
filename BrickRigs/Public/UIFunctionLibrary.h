#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EAmmoType.h"
#include "ECameraMode.h"
#include "EFireMode.h"
#include "EHUDVisibility.h"
#include "ENumericValueType.h"
#include "UIFunctionLibrary.generated.h"

class UWidget;

UCLASS(Blueprintable)
class BRICKRIGS_API UUIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUIFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText TimespanAsText(const FTimespan& Timespan);
    
    UFUNCTION(BlueprintCallable)
    static void OpenURLInExternalBrowser(const FString& URL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText NumberToText(float Value, ENumericValueType ValueType, int32 MaxFractionalDigits, bool bIncludeUnits, bool bAlwaysSign);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetUnitFormat(ENumericValueType ValueType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetHUDVisibilityDisplayText(EHUDVisibility InHUDVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWidget* GetFirstFocusableChildWidget(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetFireModeDisplayText(EFireMode InFireMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetDefaultValueStep(ENumericValueType ValueType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetCameraModeDisplayText(ECameraMode InCameraMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetAmmoTypeDisplayText(EAmmoType InAmmoType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FilterTextForProfanity(const FText& InText, FText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ConvertToUnrealUnits(float Value, ENumericValueType ValueType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float ConvertToRealUnits(float Value, ENumericValueType ValueType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText BoolAsText(bool bValue);
    
};

