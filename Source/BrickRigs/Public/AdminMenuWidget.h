#pragma once
#include "CoreMinimal.h"
#include "BrickPropertyInterface.h"
#include "EKickedPlayerSortMethod.h"
#include "MenuPageWidget.h"
#include "AdminMenuWidget.generated.h"

class UPagedListEntryWidget;
class UPagedListWidget;
class UPopupWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UAdminMenuWidget : public UMenuPageWidget, public IBrickPropertyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPagedListWidget* PagedList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UPopupWidget> KickPopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EKickedPlayerSortMethod KickedPlayerSortMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString KickedPlayerSearchText;
    
public:
    UAdminMenuWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateIsAdmin(bool bNewIsAdmin);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonsEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ShowPlayerProfile();
    
    UFUNCTION(BlueprintCallable)
    void RefreshPlayerList();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadListPage(int32 NewPage);
    
    UFUNCTION(BlueprintCallable)
    void OnListEntrySelected(UPagedListEntryWidget* Widget, bool bDoubleClick);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EditKick();
    
    
    // Fix for true pure virtual functions not being implemented
};

