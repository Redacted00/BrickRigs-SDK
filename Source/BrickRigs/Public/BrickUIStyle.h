#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateTypes.h"
#include "BrickUIBrushStyle.h"
#include "BrickUIColorStyle.h"
#include "BrickUIIconAtlas.h"
#include "EBrickUIBrushStyle.h"
#include "EBrickUIColorStyle.h"
#include "EBrickUIIconAtlas.h"
#include "EBrickUIPaddingStyle.h"
#include "EBrickUISpacingStyle.h"
#include "EBrickUIStyleState.h"
#include "EBrickUITextStyle.h"
#include "ObjectPropertyItemInterface.h"
#include "BrickUIStyle.generated.h"

class UBrickUIStyle;

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UBrickUIStyle : public UObject, public IObjectPropertyItemInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FOnUIStyleChangedDynamic, const UBrickUIStyle*, Style);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StyleDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ThrobberBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrobberRotationSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickUIIconAtlas IconAtlas[15];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickUIBrushStyle BrushStyles[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickUIColorStyle ColorStyles[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle TextStyles[9];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpacingStyles[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin PaddingStyles[7];
    
    UBrickUIStyle();
    UFUNCTION(BlueprintCallable)
    static void UnbindUIStyle(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBrickUIStyleState SwitchButtonStyleState(EBrickUIStyleState StyleState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTextStyle(EBrickUITextStyle TextStyle, const FTextBlockStyle& InTextStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetSpacingStyle(EBrickUISpacingStyle SpacingStyle, float InSpacing);
    
    UFUNCTION(BlueprintCallable)
    void SetPaddingStyle(EBrickUIPaddingStyle PaddingStyle, FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetIconAtlas(EBrickUIIconAtlas InIconAtlas, FBrickUIIconAtlas InAtlas);
    
    UFUNCTION(BlueprintCallable)
    void SetColor(EBrickUIColorStyle ColorStyle, EBrickUIStyleState StyleState, const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetBrush(EBrickUIBrushStyle BrushStyle, EBrickUIStyleState StyleState, const FSlateBrush& InBrush);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBrickUIColorStyle InvertTeamAttitudeColorStyle(EBrickUIColorStyle ColorStyle);
    
    UFUNCTION(BlueprintCallable)
    static void GetUIStyle(UBrickUIStyle::FOnUIStyleChangedDynamic Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTextBlockStyle GetTextStyle(EBrickUITextStyle TextStyle, const FTextBlockStyle& Fallback) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBrickUITextStyle GetTeamAttitudeTextStyle(TEnumAsByte<ETeamAttitude::Type> TeamAttitude);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBrickUIColorStyle GetTeamAttitudeColorStyle(TEnumAsByte<ETeamAttitude::Type> TeamAttitude);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpacing(EBrickUISpacingStyle SpacingStyle, float Fallback) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMargin GetPadding(EBrickUIPaddingStyle PaddingStyle, const FMargin& Fallback) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetColor(EBrickUIColorStyle ColorStyle, EBrickUIStyleState StyleState, const FLinearColor& Fallback) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetBrush(EBrickUIBrushStyle BrushStyle, EBrickUIStyleState StyleState, const FSlateBrush& Fallback) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatRichTextStyle(EBrickUITextStyle Style, const FText& InText);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuildStyle();
    
    
    // Fix for true pure virtual functions not being implemented
};

