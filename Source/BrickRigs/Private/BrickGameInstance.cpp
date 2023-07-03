#include "BrickGameInstance.h"
#include "Templates/SubclassOf.h"

bool UBrickGameInstance::QuitGame() {
    return false;
}

bool UBrickGameInstance::OpenPopup(FPopupHandle& Handle, UPopupParams* PopupParams, bool bToggleOpen) {
    return false;
}

bool UBrickGameInstance::OpenMessagePopup(FPopupHandle& Handle, FText Message, bool bCanCancel, FOnPopupClosedScript ClosedDelegate) {
    return false;
}

void UBrickGameInstance::OpenMainMenu(bool bForceExit) {
}

UPopupParams* UBrickGameInstance::CreatePopupParams(TSubclassOf<UPopupParams> ParamsClass) {
    return NULL;
}

bool UBrickGameInstance::ClosePopup(FPopupHandle& Handle, EPopupResult Result) {
    return false;
}

UBrickGameInstance::UBrickGameInstance() {
    this->LoadingScreenWidget = NULL;
    this->WindowManagerWidget = NULL;
    this->MusicAudioComponent = NULL;
    this->BrickStaticInfoClasses.AddDefaulted(440);
    this->BrickFilterClasses.AddDefaulted(20);
    this->BrickMaterials.AddDefaulted(19);
    this->BrickPatternClasses.AddDefaulted(30);
    this->BrickDecals.AddDefaulted(25);
    this->SirenSequenceClasses.AddDefaulted(14);
    this->SirenTypeClasses.AddDefaulted(5);
    this->ExplosiveMaterialClasses.AddDefaulted(4);
    this->InventoryItemClasses.AddDefaulted(41);
    this->UIStyleClasses.AddDefaulted(6);
    this->WeatherConditions.AddDefaulted(9);
    this->LevelInfos.AddDefaulted(7);
    this->GameModeInfos.AddDefaulted(5);
    this->BillboardImages.AddDefaulted(6);
}

