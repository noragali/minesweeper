#include "cell.h"

class Board{
private:
    Cell board[9][9];
public:
    Board();
    void printBoard();
    void revealAll();
    void checkNumber();
    void revealCell(int row, int col);
    bool isMineRevealed();
    bool hasWon();
};
