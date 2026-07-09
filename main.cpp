#include <iostream>
#include "board.h"
using namespace std;

int main() {
    Board board;

    board.checkNumber();

    bool gameOver = false;

    while(gameOver == false) {
        int row, col;

        board.printBoard();

        cout << "Enter row: ";
        cin >> row;

        cout << "Enter col: ";
        cin >> col;

        board.revealCell(row-1, col-1);

        if(board.isMineRevealed()) {
            gameOver = true;
        }
    }

    cout<<"You hit a mine!";
}
