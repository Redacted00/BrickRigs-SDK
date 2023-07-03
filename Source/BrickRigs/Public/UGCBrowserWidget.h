#pragma once
#include "CoreMinimal.h"
#include "BrickPropertyInterface.h"
#include "EPlayerVehicleSpawnInvincibility.h"
#include "EUGCQueryType.h"
#include "EUGCSortMethod.h"
#include "PopupWidget.h"
#include "UGCTags.h"
#include "UGCBrowserWidget.generated.h"

class UPagedListEntryWidget;
class UPagedListWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class BRICKRIGS_API UUGCBrowserWidget : public UPopupWidget, public IBrickPropertyInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUGCQueryType LastSelectedUGCQueryType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUGCSortMethod LastSelectedUGCSortMethod;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPagedListWidget* PagedList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUGCQueryType UGCQueryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EUGCSortMethod UGCSortMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString UGCSearchText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowLegacyItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUGCTags UGCTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPlayerVehicleSpawnInvincibility VehicleSpawnInvincibility;
    
public:
    UUGCBrowserWidget();
    UFUNCTION(BlueprintCallable)
    void VoteOnSelectedItem(bool bVoteUp);
    
    UFUNCTION(BlueprintCallable)
    void ViewSelectedItemInBrowser();
    
    UFUNCTION(BlueprintCallable)
    void UploadItem(bool bUpdateSelected);
    
    UFUNCTION(BlueprintCallable)
    void SubscribeSelectedItem(bool bSubscribe);
    
    UFUNCTION(BlueprintCallable)
    void SpawnSelectedItem(bool bReplaceCurrent);
    
    UFUNCTION(BlueprintCallable)
    void SaveItem(bool bOverwriteSelected);
    
    UFUNCTION(BlueprintCallable)
    void RecoverSelectedAutoSave();
    
    UFUNCTION(BlueprintCallable)
    void OpenSelectedItemInExplorer();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadListPage(int32 NewPage);
    
    UFUNCTION(BlueprintCallable)
    void OnListEntrySelected(UPagedListEntryWidget* Widget, bool bDoubleClick);
    
public:
    UFUNCTION(BlueprintCallable)
    void ImportSelectedItem();
    
    UFUNCTION(BlueprintCallable)
    void FavoriteSelectedItem(bool bFavorite);
    
    UFUNCTION(BlueprintCallable)
    void EditSelectedItem();
    
    UFUNCTION(BlueprintCallable)
    void DuplicateSelectedItem();
    
    UFUNCTION(BlueprintCallable)
    void DeleteSelectedItem();
    
    UFUNCTION(BlueprintCallable)
    void CycleVehicleSpawnInvincibility();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateVoteButtons(bool bVotedUp, bool bVotedDown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateViewInBrowserButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateUploadNewButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateUpdateExistingButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSubscribeButton(bool bIsSubscribed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSpawnInvincibilityButton(const FText& CurrentInvincibilityText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSpawnButton(bool bCanReplaceCurrent, bool bCanSpawn, const FText& SpawnFailureText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSaveOverwriteButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateSaveNewButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateRecoverAutoSaveButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateOpenInExplorerButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateNewItemButton();
    
public:
    UFUNCTION(BlueprintCallable)
    void CreateNewItem();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateImportButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateFavoriteButton(bool bIsFavorited);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateEditButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateDuplicateButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateDeleteButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateClearItemsButton(bool bIsArrayProperty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateCancelButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateAddOrRemoveItemButton(bool bIsArrayProperty, bool bIsSelected);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearItems();
    
    UFUNCTION(BlueprintCallable)
    void AddOrRemoveSelectedItem(bool bAdd);
    
    
    // Fix for true pure virtual functions not being implemented
};

