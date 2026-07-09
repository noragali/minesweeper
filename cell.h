class Cell{
private:
    bool mine;
    bool revealed;
    bool flagged;
    int neighbourCount;
public:
    bool isMine();
    bool isRevealed();
    bool isFlagged();

    void setMine();
    void setRevealed();
    void setNeighbourCount(int number);

    void reveal();
    void toggleFlag();

    int getNeighbourCount();
};
