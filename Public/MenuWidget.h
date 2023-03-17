#pragma once
#include "CoreMinimal.h"
#include "MainWidgetBase.h"
#include "MenuWidget.generated.h"

class UMenuPageWidget;
class UPopupWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UMenuWidget : public UMainWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMenuPageWidget*> MenuPageWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMenuPageWidget* CurrentMenuPage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPopupWidget> JoinSessionPopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPopupWidget> NetworkErrorPopupClass;
    
public:
    UMenuWidget();
    UFUNCTION(BlueprintCallable)
    bool StepBack();
    
    UFUNCTION(BlueprintCallable)
    void ShowMenuPage(TSoftClassPtr<UMenuPageWidget> WidgetClass, FText TitleText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTitleText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveMenuPage(UMenuPageWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayMenuTransition();
    
    UFUNCTION(BlueprintCallable)
    void OpenMenu(FName InMenu);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMenuContextChanged(const FName& NewContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickedQuickGame();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnClickedBack();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMainMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateBackButton();
    
    UFUNCTION(BlueprintCallable)
    void CloseMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddMenuPage(UMenuPageWidget* Widget);
    
};

