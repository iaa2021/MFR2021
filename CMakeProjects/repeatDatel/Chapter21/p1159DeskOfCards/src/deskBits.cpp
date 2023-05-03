#include "DeskOfCards1.h"
#include "config.h"
int main()
{
    cout << "Project's version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    DeskOfCards1::printVersion();
    DeskOfCards1 desk;
    desk.shuffle();
    desk.deal();
    return 0;
}