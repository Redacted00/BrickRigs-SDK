#include "NiagaraDataInterfaceGrid3D.h"

UNiagaraDataInterfaceGrid3D::UNiagaraDataInterfaceGrid3D() {
    this->CellSize = 1.00f;
    this->NumCellsMaxAxis = 10;
    this->SetResolutionMethod = ESetResolutionMethod::Independent;
}

