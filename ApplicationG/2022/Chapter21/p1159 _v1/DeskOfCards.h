struct Card
{
    char *face;
    char *suit;
};
class DeskOfCards
{
public:
    DeskOfCards();
    void shuffle();
    void deal();
private:
    Card desk[52];
};

