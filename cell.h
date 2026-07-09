class Cell{
private:
    bool mine;
    bool revealed;
    bool flagged;
    int neighbourCount;
public:
    Cell();
    bool isMine();
    bool isRevealed();
    bool isFlagged();

    void setMine(bool mineValue);
    void setRevealed(bool revealedValue);
    void setNeighbourCount(int number);

    void reveal();
    void toggleFlag();

    int getNeighbourCount();
};
