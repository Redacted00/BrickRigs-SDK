#include "DestructibleInstanceTemplate.h"

UDestructibleInstanceTemplate::UDestructibleInstanceTemplate() {
    this->Mesh = NULL;
    this->BrokenMesh = NULL;
    this->bSimulateBrokenMesh = false;
    this->BrokenMeshMaxLinearSpeed = 300.00f;
    this->BrokenMeshMaxAngularSpeed = 180.00f;
    this->MinDamage = -1.00f;
    this->MaxDrawDistance = 100000.00f;
    this->MaxBreakEmitterSpawnDistance = 50000.00f;
    this->BreakEmitter = NULL;
    this->BreakSound = NULL;
}

