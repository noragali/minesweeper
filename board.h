#include "cell.h"

class Board{
private:
    Cell board[9][9];
public:
    Board();
    void printBoard();
    void checkNumber();
};
