#include "AdminMenuWidget.h"

void UAdminMenuWidget::UpdateIsAdmin_Implementation(bool bNewIsAdmin) {
}


void UAdminMenuWidget::ShowPlayerProfile() {
}

void UAdminMenuWidget::RevokeKick() {
}

void UAdminMenuWidget::RefreshPlayerList() {
}

void UAdminMenuWidget::OnLoadListPage(int32 NewPage) {
}

void UAdminMenuWidget::OnListEntrySelected(UPagedListEntryWidget* Widget, bool bDoubleClick) {
}

void UAdminMenuWidget::EditKick() {
}

UAdminMenuWidget::UAdminMenuWidget() {
    this->PagedList = NULL;
    this->KickedPlayerSortMethod = EKickedPlayerSortMethod::PlayerName;
}

