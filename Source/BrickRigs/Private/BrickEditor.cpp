#include "BrickEditor.h"
#include "BrickEditorInterfaceComponent.h"

ABrickEditor::ABrickEditor() {
    this->PlayerController = NULL;
    this->CurrentEditorMode = NULL;
    this->OutlineMID = NULL;
    this->BoundsMID = NULL;
    this->EditorInterfaceComponent = CreateDefaultSubobject<UBrickEditorInterfaceComponent>(TEXT("EditorInterfaceComponent"));
    this->BoundsMeshComponent = NULL;
    this->GridMeshComponent = NULL;
    this->GizmoMeshComponent = NULL;
    this->CenterOfMassMeshComponent = NULL;
    this->StaticInfoClass = NULL;
}

