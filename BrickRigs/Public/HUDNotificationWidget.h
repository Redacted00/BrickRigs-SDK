#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BrickUIIconSlot.h"
#include "EBrickUIColorStyle.h"
#include "HUDNotificationWidget.generated.h"

class UBrickImage;
class UBrickTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UHUDNotificationWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* TextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickImage* IconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickImage* ThumbnailImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotificationDisplayTime;
    
public:
    UHUDNotificationWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateIsThumbnailNotification(bool bNewIsThumbnail);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFadeOutAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayFadeInAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnFadedOut();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeNotification(FBrickUIIconSlot InIconSlot, const FText& InText, EBrickUIColorStyle InColorStyle);
    
};

