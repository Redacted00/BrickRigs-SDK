#pragma once
#include "CoreMinimal.h"
#include "BrickPropertyInterface.h"
#include "PopupParams.h"
#include "UGCFileInfo.h"
#include "UGCMetaDataPopupParams.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UUGCMetaDataPopupParams : public UPopupParams, public IBrickPropertyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUpdateTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUpdateDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUpdateThumbnail;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUGCFileInfo FileInfo;
    
    UUGCMetaDataPopupParams();
    
    // Fix for true pure virtual functions not being implemented
};

