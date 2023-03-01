#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ETeamAttitude -FallbackName=ETeamAttitude
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=TextBlockStyle -FallbackName=TextBlockStyle
#include "BrickUIBrushStyle.h"
#include "BrickUIColorStyle.h"
#include "BrickUIIconAtlas.h"
#include "EBrickUIBrushStyle.h"
#include "EBrickUIColorStyle.h"
#include "EBrickUIIconAtlas.h"
#include "EBrickUIStyleState.h"
#include "EBrickUITextStyle.h"
#include "ObjectPropertyItemInterface.h"
#include "BrickUIStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class BRICKRIGS_API UBrickUIStyle : public UObject, public IObjectPropertyItemInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StyleDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ThrobberBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrobberRotationSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickUIBrushStyle BrushStyles[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickUIColorStyle ColorStyles[7];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle TextStyles[9];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickUIIconAtlas IconAtlas[15];
    
    UBrickUIStyle();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBrickUIStyleState SwitchButtonStyleState(EBrickUIStyleState StyleState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTextStyle(EBrickUITextStyle TextStyle, const FTextBlockStyle& InTextStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetIconAtlas(EBrickUIIconAtlas InIconAtlas, FBrickUIIconAtlas InAtlas);
    
    UFUNCTION(BlueprintCallable)
    void SetColor(EBrickUIColorStyle ColorStyle, EBrickUIStyleState StyleState, const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void SetBrush(EBrickUIBrushStyle BrushStyle, EBrickUIStyleState StyleState, const FSlateBrush& InBrush);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBrickUIColorStyle InvertTeamAttitudeColorStyle(EBrickUIColorStyle ColorStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTextBlockStyle GetTextStyle(EBrickUITextStyle TextStyle, const FTextBlockStyle& Fallback) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBrickUITextStyle GetTeamAttitudeTextStyle(TEnumAsByte<ETeamAttitude::Type> TeamAttitude);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBrickUIColorStyle GetTeamAttitudeColorStyle(TEnumAsByte<ETeamAttitude::Type> TeamAttitude);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetColor(EBrickUIColorStyle ColorStyle, EBrickUIStyleState StyleState, const FLinearColor& Fallback) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetBrush(EBrickUIBrushStyle BrushStyle, EBrickUIStyleState StyleState, const FSlateBrush& Fallback) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatRichTextStyle(EBrickUITextStyle Style, const FText& InText);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BuildStyle();
    
    
    // Fix for true pure virtual functions not being implemented
};

