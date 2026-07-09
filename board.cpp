#include <iostream>
#include <random>
#include "board.h"
using namespace std;

Board::Board() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 8);

    int mines = 0;

    while(mines != 10) {
        int row = dist(gen);
        int col = dist(gen);
        if(board[row][col].isMine()) continue;
        else {
            board[row][col].setMine(true);
            mines++;
        }
    }
}

void Board::printBoard(){
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            if(board[i][j].isRevealed()) {
                if(board[i][j].isMine()) cout << "* ";
                else cout << board[i][j].getNeighbourCount() << " ";
            } else if(board[i][j].isFlagged()) {
                cout << "F ";
            } else {
                cout << "# ";
            }
        }
             cout << endl;
    }
}

void Board::checkNumber() {
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            int num = 0;

            if(board[i][j].isMine()) continue;
            if(i<8) if(board[i+1][j].isMine()) num++;
            if(i>0) if(board[i-1][j].isMine()) num++;
            if(j<8) if(board[i][j+1].isMine()) num++;
            if(j>0) if(board[i][j-1].isMine()) num++;
            if(i>0&& j<8) if(board[i-1][j+1].isMine()) num++;
            if(i<8 && j<8) if(board[i+1][j+1].isMine()) num++;
            if(i>0 && j>0) if(board[i-1][j-1].isMine()) num++;
            if(i<8 && j>0) if(board[i+1][j-1].isMine()) num++;
            board[i][j].setNeighbourCount(num);
        }
    }
}

void Board::revealAll(){
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            board[i][j].setRevealed(true);
        }
    }
}
