#pragma once
#include "CoreMinimal.h"
#include "ESlateVisibility.h"
#include "OnListEntryGeneratedDynamicDelegate.h"
#include "OnListEntryReleasedDynamicDelegate.h"
#include "Templates/SubclassOf.h"
#include "UserWidgetPool.h"
#include "Widget.h"
#include "ListViewBase.generated.h"

class UUserWidget;

UCLASS(Abstract, Blueprintable, HideDropdown)
class UMG_API UListViewBase : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WheelScrollMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableScrollAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFixedLineOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FixedLineScrollOffset;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListEntryGeneratedDynamic BP_OnEntryGenerated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnListEntryReleasedDynamic BP_OnEntryReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUserWidgetPool EntryWidgetPool;
    
public:
    UListViewBase();
    UFUNCTION(BlueprintCallable)
    void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollOffset(const float InScrollOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollBarVisibility(ESlateVisibility InVisibility);
    
    UFUNCTION(BlueprintCallable)
    void ScrollToTop();
    
    UFUNCTION(BlueprintCallable)
    void ScrollToBottom();
    
    UFUNCTION(BlueprintCallable)
    void RequestRefresh();
    
    UFUNCTION(BlueprintCallable)
    void RegenerateAllEntries();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UUserWidget*> GetDisplayedEntryWidgets() const;
    
};

