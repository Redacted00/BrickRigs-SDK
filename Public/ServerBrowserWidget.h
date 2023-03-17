#pragma once
#include "CoreMinimal.h"
#include "BrickPropertyInterface.h"
#include "EServerSortMethod.h"
#include "MenuPageWidget.h"
#include "ServerBrowserWidget.generated.h"

class UPagedListEntryWidget;
class UPagedListWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew, Config=Game)
class BRICKRIGS_API UServerBrowserWidget : public UMenuPageWidget, public IBrickPropertyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPagedListWidget* PagedList;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EServerSortMethod ServerSortMethod;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchPrivateServers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchIncompatibleBuilds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerSearchText;
    
public:
    UServerBrowserWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCanRefresh(bool bCanRefresh);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCanJoin(bool bCanJoin);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshServers();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadListPage(int32 NewPage);
    
    UFUNCTION(BlueprintCallable)
    void OnListEntrySelected(UPagedListEntryWidget* Widget, bool bDoubleClick);
    
public:
    UFUNCTION(BlueprintCallable)
    void JoinServer();
    
    
    // Fix for true pure virtual functions not being implemented
};

