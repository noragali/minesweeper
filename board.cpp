#include <iostream>
#include <random>
#include "board.h"
using namespace std;

Board::Board() {
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            board[i][j] = '.';
        }
    }

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 8);

    int mines = 0;

    while(mines != 10) {
        int row = dist(gen);
        int col = dist(gen);
        if(board[row][col] == '*') continue;
        else {
            board[row][col] = '*';
            mines++;
        }
    }
}

void Board::printBoard(){
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            cout << board[i][j] << " ";
        }
     cout << endl;
    }
}

void Board::checkNumber() {
    for(int i=0; i<9; i++) {
        for(int j=0; j<9; j++) {
            int num = 0;

            if(board[i][j] == '*') continue;
            if(i<8) if(board[i+1][j] == '*') num++;
            if(i>0) if(board[i-1][j] == '*') num++;
            if(j<8) if(board[i][j+1] == '*') num++;
            if(j>0) if(board[i][j-1] == '*') num++;
            if(i>0&& j<8) if(board[i-1][j+1] == '*') num++;
            if(i<8 && j<8) if(board[i+1][j+1] == '*') num++;
            if(i>0 && j>0) if(board[i-1][j-1] == '*') num++;
            if(i<8 && j>0) if(board[i+1][j-1] == '*') num++;
            board[i][j] = '0' + num;
        }
    }
}
