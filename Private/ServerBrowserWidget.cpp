#include "ServerBrowserWidget.h"



void UServerBrowserWidget::RefreshServers() {
}

void UServerBrowserWidget::OnLoadListPage(int32 NewPage) {
}

void UServerBrowserWidget::OnListEntrySelected(UPagedListEntryWidget* Widget, bool bDoubleClick) {
}

void UServerBrowserWidget::JoinServer() {
}

UServerBrowserWidget::UServerBrowserWidget() {
    this->PagedList = NULL;
    this->ServerSortMethod = EServerSortMethod::Name;
    this->bSearchPrivateServers = true;
    this->bSearchIncompatibleBuilds = true;
}

