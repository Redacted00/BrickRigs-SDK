#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EValueChangedEventType.h"
#include "PageSelectorWidget.generated.h"

class UBrickSliderWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPageSelectorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPageChanged, int32, Page);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumPages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickSliderWidget* Slider;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPageChanged OnPageChangedDelegate;
    
    UPageSelectorWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtons(bool bCanGoBack, bool bCanGoForward);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentPage(int32 NewPage);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSliderValueChanged(float NewValue, EValueChangedEventType EventType);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializePages(int32 InNumPages, int32 InCurrentPage, int32 InNumResults);
    
    UFUNCTION(BlueprintCallable)
    void GotoNextPage(bool bForward, bool bSkipToEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPage() const;
    
};

