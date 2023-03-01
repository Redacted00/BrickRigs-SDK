#include "Throbber.h"

void UThrobber::SetNumberOfPieces(int32 InNumberOfPieces) {
}

void UThrobber::SetAnimateVertically(bool bInAnimateVertically) {
}

void UThrobber::SetAnimateOpacity(bool bInAnimateOpacity) {
}

void UThrobber::SetAnimateHorizontally(bool bInAnimateHorizontally) {
}

UThrobber::UThrobber() {
    this->NumberOfPieces = 3;
    this->bAnimateHorizontally = true;
    this->bAnimateVertically = true;
    this->bAnimateOpacity = true;
    this->PieceImage = NULL;
}

