#include "NiagaraCompileEvent.h"

FNiagaraCompileEvent::FNiagaraCompileEvent() {
    this->Severity = FNiagaraCompileEventSeverity::Log;
    this->bDismissable = false;
}

