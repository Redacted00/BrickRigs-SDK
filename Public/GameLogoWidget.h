#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EGameLogoContent.h"
#include "GameLogoWidget.generated.h"

class UBrickTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UGameLogoWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* LogoTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameLogoContent DisplayedContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CustomDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterWriteTime;
    
public:
    UGameLogoWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVersionText(const FText& Version);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDisplayedContent(EGameLogoContent InContent);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomContent(FText InText, const FString& InVersion);
    
private:
    UFUNCTION(BlueprintCallable)
    FText GetLogoText() const;
    
};

