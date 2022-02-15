struct Card
{
    char *suit;
    char *face;
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



