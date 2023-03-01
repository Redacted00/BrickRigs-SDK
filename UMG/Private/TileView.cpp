#include "TileView.h"

void UTileView::SetEntryWidth(float NewWidth) {
}

void UTileView::SetEntryHeight(float NewHeight) {
}

float UTileView::GetEntryWidth() const {
    return 0.0f;
}

float UTileView::GetEntryHeight() const {
    return 0.0f;
}

UTileView::UTileView() {
    this->EntryHeight = 128.00f;
    this->EntryWidth = 128.00f;
    this->TileAlignment = EListItemAlignment::EvenlyDistributed;
    this->bWrapHorizontalNavigation = false;
}

