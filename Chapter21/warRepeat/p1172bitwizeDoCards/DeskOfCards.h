struct bitCard
{
    unsigned suit : 2;
    unsigned face : 4;
    unsigned color : 1;
};
class DeskOfCards
{
private:
    bitCard desk[ 52 ];
    char *colour[2] = { "black", "red" };
    char *face[ 13 ] = { "Ace", " 2 ", " 3 ", " 4 ", " 5 ", " 6 ", " 7 ", " 8 ", " 9 ", " 10 ", " Jack ", " Queen ", " King " };
    char *suit[ 4 ] = { " clubs ", " spades ", " diamonds ", " hearts " };
public:
    DeskOfCards();
    void deal();
    void shuffle();
};





