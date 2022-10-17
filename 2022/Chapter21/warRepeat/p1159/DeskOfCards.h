struct Card
{
    char *face;
    char *suit;
};

class DeskOfCards
{
private:
    Card desk[52];
public:
    DeskOfCards();
    void shuffle();
    void deal();
};

