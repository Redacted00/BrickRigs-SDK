#include "UserListEntryLibrary.h"

class IUserListEntry;
class UUserListEntry;
class UListViewBase;

bool UUserListEntryLibrary::IsListItemSelected(TScriptInterface<IUserListEntry> UserListEntry) {
    return false;
}

bool UUserListEntryLibrary::IsListItemExpanded(TScriptInterface<IUserListEntry> UserListEntry) {
    return false;
}

UListViewBase* UUserListEntryLibrary::GetOwningListView(TScriptInterface<IUserListEntry> UserListEntry) {
    return NULL;
}

UUserListEntryLibrary::UUserListEntryLibrary() {
}

