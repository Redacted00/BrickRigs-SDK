#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "PagedListEntryWidget.h"
#include "UGCFileInfo.h"
#include "UGCItemWidget.generated.h"

class UBrickImage;
class UBrickTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UUGCItemWidget : public UPagedListEntryWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUGCFileInfo Entry;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickImage* Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* NameTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThumbnailRoundedEdgeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ThumbnailShadowOffset;
    
public:
    UUGCItemWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateItemWidget(bool bInIsSelected, bool bInIsLegacyFile, bool bInHasAutoSave, bool bInIsDedicatedAutoSave);
    
};

