#include <iostream>
#include "cell.h"
using namespace std;

Cell::Cell() {
    mine = false;
    revealed = false;
    flagged = false;
    neighbourCount = 0;
}

bool Cell::isMine() {
    return mine;
}

bool Cell::isRevealed() {
    return revealed;
}

bool Cell::isFlagged() {
    return flagged;
}

void Cell::setMine(bool mineValue) {
    mine = mineValue;
}

void Cell::setRevealed(bool revealedValue) {
    revealed = revealedValue;
}

void Cell::toggleFlag() {
    if(flagged == true) flagged = false;
    else flagged = true;
}

int Cell::getNeighbourCount() {
    return neighbourCount;
}

void Cell::setNeighbourCount(int number) {
    neighbourCount = number;

}
