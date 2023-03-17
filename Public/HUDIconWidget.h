#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BrickUIIconSlot.h"
#include "EBrickUIColorStyle.h"
#include "EBrickUIStyleState.h"
#include "HUDIconWidget.generated.h"

class UBrickImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UHUDIconWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickImage* IconImage;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D IconSize;
    
    UHUDIconWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateNameText();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateIconStyle(EBrickUIColorStyle InColorStyle, EBrickUIStyleState InStyleState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateIconRotation(float NewRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UninitializeIcon();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetIconSlot(FBrickUIIconSlot NewSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetIconColorStyle(EBrickUIColorStyle NewColorStyle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostInitializeIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetIconWorldRotation(float& OutRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetIconDisplayName() const;
    
};

