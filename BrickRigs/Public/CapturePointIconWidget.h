#pragma once
#include "CoreMinimal.h"
#include "HUDIconWidget.h"
#include "CapturePointIconWidget.generated.h"

class ABaseCharacter;
class ACapturePoint;
class UBrickImage;
class UBrickTextBlock;
class UMaterialInstanceDynamic;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UCapturePointIconWidget : public UHUDIconWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABaseCharacter* PlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACapturePoint* CapturePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Mid;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickImage* CaptureProgressImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* CharTextBlock;
    
public:
    UCapturePointIconWidget();
};

