#include "DeskOfCards.h"
#include "config.h"
int main()
{
    cout << "Project's version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    DeskOfCards::printVersion();
    cout << "\nFor face i % 13 from 0 to 12 is:\n";
    for (int i = 0; i < 52; i++)
    {
        cout << (i % 13) << ", ";
        if( ( i + 1) % 13 == 0 )
        cout << endl;
    }
    cout << "\nFor suit i / 13 from 0 to 12 is:\n";
    for (int i = 0; i < 52; i++)
    {
        cout << (i / 13) << ", ";
        if( ( i + 1) % 13 == 0 )
        cout << endl;
    }
    cout << endl;
    DeskOfCards desk;
    desk.shuffle();
    desk.deal();
    return 0;
}