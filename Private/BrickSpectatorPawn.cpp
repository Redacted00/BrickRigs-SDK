#include "BrickSpectatorPawn.h"

ABrickSpectatorPawn::ABrickSpectatorPawn() {
    this->FollowTarget = NULL;
    this->Mid = NULL;
    this->PlacementBoundsMeshComponent = NULL;
    this->PlacementBoundsMesh = NULL;
    this->PlacementBoundsSizeInterpSpeed = 8.00f;
    this->PlacementBoundsScreenFitInflation = 1000.00f;
    this->PlacementSweepRadius = 30.00f;
    this->PawnRotationSpeed = 90.00f;
    this->ShiftInterpSpeed = 1.00f;
}

