#include "DynamicEntryBoxBase.h"

class UUserWidget;

void UDynamicEntryBoxBase::SetRadialSettings(const FRadialBoxSettings& InSettings) {
}

void UDynamicEntryBoxBase::SetEntrySpacing(const FVector2D& InEntrySpacing) {
}

int32 UDynamicEntryBoxBase::GetNumEntries() const {
    return 0;
}

TArray<UUserWidget*> UDynamicEntryBoxBase::GetAllEntries() const {
    return TArray<UUserWidget*>();
}

UDynamicEntryBoxBase::UDynamicEntryBoxBase() {
    this->EntryBoxType = EDynamicBoxType::Horizontal;
    this->EntryHorizontalAlignment = HAlign_Fill;
    this->EntryVerticalAlignment = VAlign_Fill;
    this->MaxElementSize = 0;
}

