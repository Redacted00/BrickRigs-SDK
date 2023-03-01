#include "NiagaraPreviewGrid.h"

class UNiagaraComponent;

void ANiagaraPreviewGrid::SetPaused(bool bPaused) {
}

void ANiagaraPreviewGrid::GetPreviews(TArray<UNiagaraComponent*>& OutPreviews) {
}

void ANiagaraPreviewGrid::DeactivatePreviews() {
}

void ANiagaraPreviewGrid::ActivatePreviews(bool bReset) {
}

ANiagaraPreviewGrid::ANiagaraPreviewGrid() {
    this->System = NULL;
    this->ResetMode = ENiagaraPreviewGridResetMode::Never;
    this->PreviewAxisX = NULL;
    this->PreviewAxisY = NULL;
    this->PreviewClass = NULL;
    this->SpacingX = 250.00f;
    this->SpacingY = 250.00f;
    this->NumX = 0;
    this->NumY = 0;
}

