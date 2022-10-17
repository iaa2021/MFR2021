#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <cstdlib>
using std::exit;
using std::atexit;
#include "config.h"
void print();
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION) << endl;
    atexit( print );
    cout << "Enter 1 to terminate program with function exit,\n";
    cout << "Enter 2 to terminate program normally:\n";
    int answer;
    cin >> answer;
    if ( answer == 1 )
    {
        cout << "Terminating program with function exit.\n";
        exit( EXIT_SUCCESS );
    }
    cout << "Terminating program by reaching end of main.\n";
    return 0;
    
}
void print()
{
    cout << "\nExecuting print function at program termination.\n";
    cout << "Program terminated.\n";
}