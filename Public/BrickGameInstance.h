#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "EPopupResult.h"
#include "OnPopupClosedScriptDelegate.h"
#include "PopupHandle.h"
#include "Templates/SubclassOf.h"
#include "BrickGameInstance.generated.h"

class UAudioComponent;
class UBillboardImage;
class UBrickDecal;
class UBrickMaterial;
class UGameModeInfo;
class ULevelInfo;
class ULoadingScreenWidget;
class UPopupParams;
class USoundCue;
class UWeatherCondition;
class UWindowManagerWidget;

UCLASS(Abstract, Blueprintable, NonTransient)
class BRICKRIGS_API UBrickGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULoadingScreenWidget* LoadingScreenWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWindowManagerWidget* WindowManagerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* MusicAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> PermaBannedPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UClass*> BrickStaticInfoClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UClass*> BrickFilterClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBrickMaterial*> BrickMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UClass*> BrickPatternClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBrickDecal*> BrickDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UClass*> SirenSequenceClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UClass*> SirenTypeClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UClass*> ExplosiveMaterialClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UClass*> InventoryItemClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UClass*> UIStyleClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWeatherCondition*> WeatherConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULevelInfo*> LevelInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGameModeInfo*> GameModeInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBillboardImage*> BillboardImages;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULoadingScreenWidget> LoadingScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWindowManagerWidget> WindowManagerWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint UGCThumbnailResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* MenuMusicSoundCue;
    
public:
    UBrickGameInstance();
    UFUNCTION(BlueprintCallable)
    bool QuitGame();
    
    UFUNCTION(BlueprintCallable)
    bool OpenPopup(FPopupHandle& Handle, UPopupParams* PopupParams, bool bToggleOpen);
    
    UFUNCTION(BlueprintCallable)
    bool OpenMessagePopup(FPopupHandle& Handle, FText Message, bool bCanCancel, FOnPopupClosedScript ClosedDelegate);
    
    UFUNCTION(BlueprintCallable)
    void OpenMainMenu(bool bForceExit);
    
    UFUNCTION(BlueprintCallable)
    UPopupParams* CreatePopupParams(TSubclassOf<UPopupParams> ParamsClass);
    
    UFUNCTION(BlueprintCallable)
    bool ClosePopup(FPopupHandle& Handle, EPopupResult Result);
    
};

