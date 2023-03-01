#include "InputTableRow.h"

FInputTableRow::FInputTableRow() {
    this->ActionIndex = 0;
    this->Type = EInputRowType::PressAction;
    this->InputMenuCategory = NULL;
    this->InputContextCategory = NULL;
    this->bQuickAccess = false;
    this->bConsumeInput = false;
}

