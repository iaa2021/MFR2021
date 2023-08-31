#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::ios;
#include <cstdlib>
using std::exit;
using std::atexit;
#include "config.h"
void print();
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration exit, atexit functions.\n";
    atexit( print );
    cout << "Enter 1 to terminate program with function exit,"; 
    cout << "\nEnter 2 to terminate program normally:\n"; 
    int answer; cin >> answer;
    if( answer == 1 )
    {
        cout << "\nTerminating program with function exit\n"; 
        exit( EXIT_FAILURE ); 
    }
    cout << "\nTerminating program by reaching the end of main";
    cout << endl; 
    return 0;
}
void print()
{
    cout << "Executing function print at program termination\n";
    cout << "Program terminated" << endl;  
}