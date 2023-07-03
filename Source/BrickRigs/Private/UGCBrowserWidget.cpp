#include "UGCBrowserWidget.h"

void UUGCBrowserWidget::VoteOnSelectedItem(bool bVoteUp) {
}

void UUGCBrowserWidget::ViewSelectedItemInBrowser() {
}

void UUGCBrowserWidget::UploadItem(bool bUpdateSelected) {
}

void UUGCBrowserWidget::SubscribeSelectedItem(bool bSubscribe) {
}

void UUGCBrowserWidget::SpawnSelectedItem(bool bReplaceCurrent) {
}

void UUGCBrowserWidget::SaveItem(bool bOverwriteSelected) {
}

void UUGCBrowserWidget::RecoverSelectedAutoSave() {
}

void UUGCBrowserWidget::OpenSelectedItemInExplorer() {
}

void UUGCBrowserWidget::OnLoadListPage(int32 NewPage) {
}

void UUGCBrowserWidget::OnListEntrySelected(UPagedListEntryWidget* Widget, bool bDoubleClick) {
}

void UUGCBrowserWidget::ImportSelectedItem() {
}

void UUGCBrowserWidget::FavoriteSelectedItem(bool bFavorite) {
}

void UUGCBrowserWidget::EditSelectedItem() {
}

void UUGCBrowserWidget::DuplicateSelectedItem() {
}

void UUGCBrowserWidget::DeleteSelectedItem() {
}

void UUGCBrowserWidget::CycleVehicleSpawnInvincibility() {
}













void UUGCBrowserWidget::CreateNewItem() {
}









void UUGCBrowserWidget::ClearItems() {
}

void UUGCBrowserWidget::AddOrRemoveSelectedItem(bool bAdd) {
}

UUGCBrowserWidget::UUGCBrowserWidget() {
    this->LastSelectedUGCQueryType = EUGCQueryType::Max;
    this->LastSelectedUGCSortMethod = EUGCSortMethod::Max;
    this->PagedList = NULL;
    this->UGCQueryType = EUGCQueryType::Local;
    this->UGCSortMethod = EUGCSortMethod::TitleAsc;
    this->bShowLegacyItems = true;
    this->VehicleSpawnInvincibility = EPlayerVehicleSpawnInvincibility::None;
}

