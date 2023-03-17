#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EBrickUIColorStyle.h"
#include "EBrickUIStyleState.h"
#include "EBrickUITextStyle.h"
#include "PingIndicatorWidget.generated.h"

class ABrickPlayerState;
class UBrickTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class BRICKRIGS_API UPingIndicatorWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABrickPlayerState* PlayerState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBrickTextBlock* PingTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDisplayPing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayFrameRate;
    
public:
    UPingIndicatorWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdatePing(int32 InPing);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTextStyle(EBrickUITextStyle NewStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetStyleState(EBrickUIStyleState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerState(ABrickPlayerState* InPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void SetPing(int32 InPing);
    
    UFUNCTION(BlueprintCallable)
    void SetMinDisplayPing(int32 InPing);
    
    UFUNCTION(BlueprintCallable)
    void SetColorStyle(EBrickUIColorStyle NewStyle);
    
};

