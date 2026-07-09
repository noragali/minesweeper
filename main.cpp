#include <iostream>
#include "board.h"
using namespace std;

int main() {
    Board board;

    board.checkNumber();

    bool gameOver = false;
    bool win = false;

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

        if(board.hasWon()) {
            win = true;
            gameOver = true;
        }
    }

    board.revealAll();
    board.printBoard();


    if(win == true) cout <<"You have won!";
    else cout << "You lost!";
}
