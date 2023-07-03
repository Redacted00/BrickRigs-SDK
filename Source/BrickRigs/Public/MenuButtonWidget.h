#pragma once
#include "CoreMinimal.h"
#include "BrickUserWidget.h"
#include "EBrickUIColorStyle.h"
#include "MenuButtonWidget.generated.h"

class UBrickButtonWidget;
class UBrickImage;
class UBrickTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UMenuButtonWidget : public UBrickUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickButtonWidget* Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* TextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickImage* IconImage;
    
public:
    UMenuButtonWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateDisplayText(const FText& InText);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDisplayText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayIcon(int32 InIconIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetColorStyle(EBrickUIColorStyle InColorStyle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnClicked();
    
};

