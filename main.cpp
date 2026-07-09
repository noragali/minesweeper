#include <iostream>
#include "board.h"
using namespace std;

int main() {
    Board board;

    board.checkNumber();

    int row, col;

    cout << "Enter row: ";
    cin >> row;

    cout << "Enter col: ";
    cin >> col;

    board.revealCell(row, col);

    board.printBoard();
}
