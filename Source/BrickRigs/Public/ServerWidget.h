#pragma once
#include "CoreMinimal.h"
#include "BrickOnlineSessionInfo.h"
#include "PagedListEntryWidget.h"
#include "ServerWidget.generated.h"

class UBrickTextBlock;
class UPingIndicatorWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UServerWidget : public UPagedListEntryWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBrickOnlineSessionInfo Entry;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* NameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* MapTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* GameModeTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* PlayerCountTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPingIndicatorWidget* PingIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPingIndicatorWidget* FrameRateIndicator;
    
public:
    UServerWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateServer(bool bIsDedicated, bool bIsPasswordProtected, bool bIsCompatibleBuild);
    
};

