#include "CircularThrobber.h"

void UCircularThrobber::SetRadius(float InRadius) {
}

void UCircularThrobber::SetPeriod(float InPeriod) {
}

void UCircularThrobber::SetNumberOfPieces(int32 InNumberOfPieces) {
}

UCircularThrobber::UCircularThrobber() {
    this->NumberOfPieces = 6;
    this->Period = 0.75f;
    this->Radius = 16.00f;
    this->PieceImage = NULL;
    this->bEnableRadius = true;
}

