#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <cstdlib>
using std::exit;
using std::atexit;
void print();
int main()
{
    atexit( print );
    cout << "Enter 1 to terminate program with function exit.\n";
    cout << "Enter 2 to terminate program normally with function atexit.\n";
    int answer;
    cin >> answer;
    if( answer == 1 )
    {
        cout << "\nTerminating program with function exit.\n";
        exit( EXIT_SUCCESS );
    }
    cout << "\nTerminating program by reaching the end of main.\n";
    return 0;
}
void print()
{
    cout << "\nExecuting function print at program termination.\n";
    cout << "Program terminated.\n";
}
