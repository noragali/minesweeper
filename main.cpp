#include <iostream>
#include <cctype>
#include "board.h"
using namespace std;

int main() {
    Board board;

    board.checkNumber();

    bool gameOver = false;
    bool win = false;

    while(gameOver == false) {
        int row, col;
        char answer;

        board.printBoard();

        while (true) {
            cout << "Enter flag or reveal (f or r): ";
            cin >> answer;

            answer = tolower(answer);

            if (answer == 'r' || answer == 'f')
                break;

            cout << "Invalid choice. Enter 'r' or 'f'.\n";
        }

        cout << "Enter row: ";
        cin >> row;

        cout << "Enter col: ";
        cin >> col;

        while(row < 1 || row > 9 || col < 1 || col > 9) {
            cout << "Invalid row or column. Please enter numbers from 1 to 9" <<endl;
            cout << "Enter row: ";
            cin >> row;
            cout << "Enter col: ";
            cin >> col;
        }

        if(answer == 'r' || answer == 'R') board.revealCell(row-1, col-1);
        else if(answer == 'f' || answer == 'F') board.toggleFlag(row-1, col-1);

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
