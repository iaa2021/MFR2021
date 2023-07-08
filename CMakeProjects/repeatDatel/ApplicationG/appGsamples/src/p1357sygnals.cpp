#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::ios;
#include <iomanip>
using std::setw;
#include <cstdlib>
using std::exit;
using std::rand;
using std::srand;
#include <csignal>
using std::raise;
using std::signal;
#include <ctime>
using std::time;
#include "config.h"
void signalHandler( int );
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of sygnals processing.\n";
    srand( time( 0 ) );
    signal( SIGINT, signalHandler );
    for (int i = 0; i < 100; i++)
    {
        int x = rand()%50 + 1;
        if( x == 25 )
        raise( SIGINT );
        cout << setw( 4 ) << i << ", ";
        if( (i + 1) % 10 == 0 )
        cout << endl;
    }
    return 0;
}
void signalHandler( int signalValue )
{
    cout << "\nInterrupt signal ( " << signalValue << " ) received.\n";
    cout << "Do you wish to continue (1 = yes or 2 = no)? "; 
    int responce; cin >> responce;
    while ( responce != 1 && responce != 2 )
    {
        cout << "(1 = yes or 2 = no)? " ; 
        cin >> responce;
    }
    if( responce != 1 )
    exit( EXIT_SUCCESS );
    signal( SIGINT, signalHandler );
}