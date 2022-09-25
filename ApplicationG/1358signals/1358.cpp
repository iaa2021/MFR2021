#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
#include <iomanip>
using std::exit;
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <csignal>
using std::raise;
using std::signal;
#include "config.h"
void signalHandler( int );
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION) << endl;
    signal( SIGINT, signalHandler );
    srand( time( 0 ) );
    for (int i = 1; i <= 100; i++)
    {
        int x = 1 + rand()%50;
        if ( x == 25 )
        raise( SIGINT );
        
        cout << setw( 4 ) << i;
        if( i % 10 == 0 )
        cout << endl;
    }
    return 0;
}
void signalHandler( int sValue )
{
    cout << "\nInterrupt signal ( " << sValue << " ) received.\n";
    cout << "Do you wish to continue ( 1 - yes, 2 - no )?\n";
    int responce; cin >> responce;
    while ( responce != 1 && responce != 2 )
    {
        cout << "\n( 1 - yes, 2 - no )?\n";
        cin >> responce;
    }
    if ( responce != 1 )
        exit( EXIT_SUCCESS );
    
    signal( SIGINT, signalHandler );
}