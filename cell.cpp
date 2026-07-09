#include <iostream>
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

void Cell::setMine() {
    mine = true;
}

void Cell::setRevealed() {
    revealed = true;
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
