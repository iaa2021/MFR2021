struct bitCard
{
    unsigned face : 4;
    unsigned suit : 2;
    unsigned colour : 1;
};
class DeskOfCards
{
private:
    bitCard desk[ 52 ];
public:
    DeskOfCards();
    void deal();
    void shuffle();
};
