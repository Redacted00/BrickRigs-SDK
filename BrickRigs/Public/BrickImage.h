#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Image -FallbackName=Image
#include "BrickUIIconSlot.h"
#include "EBrickUIColorStyle.h"
#include "EBrickUIIconAtlas.h"
#include "EBrickUIStyleState.h"
#include "BrickImage.generated.h"

UCLASS(Blueprintable)
class BRICKRIGS_API UBrickImage : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIColorStyle ColorStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIStyleState StyleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrickUIIconAtlas IconAtlas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrickUIIconSlot IconSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsThrobber;
    
    UBrickImage();
    UFUNCTION(BlueprintCallable)
    void SetStyleState(EBrickUIStyleState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetIsThrobber(bool bNewIsThrobber);
    
    UFUNCTION(BlueprintCallable)
    void SetIconSlot(FBrickUIIconSlot NewSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetIconAtlasAndSlot(EBrickUIIconAtlas NewAtlas, FBrickUIIconSlot NewSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetIconAtlas(EBrickUIIconAtlas NewAtlas);
    
    UFUNCTION(BlueprintCallable)
    void SetColorStyle(EBrickUIColorStyle NewStyle);
    
};

