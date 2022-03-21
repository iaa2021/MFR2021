#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
void printNumber( int * );
void print( void *, char );
int main()
{
    int number = 5;
    int *nPtr = &number;
    char letter = 'a';
    string text = "Hello world.";
    double dNumber = 145.65;
    printNumber( nPtr );
    cout << "\nAn output of variables using void pointers.\n";
    print( &number, 'i' );
    print( &letter, 'c' );
    print( &dNumber, 'd' );
    print( &text, 's' );
    return 0;
}
void printNumber( int *ptr )
{
    cout << *ptr << endl;
}
void print( void *ptr, char type )
{
    switch ( type )
    {
    case 'i':// handle int *
        cout << *( ( int * )ptr ) << endl;
        break;
    case 'c':// handle char *
        cout << *( ( char * )ptr ) << endl;
        break;
    case 'd':// handle double *
        cout << *(( double * )ptr) << endl;
        break;
    case 's'://handle string *
        cout << *( ( string * )ptr ) << endl;
        break;
    default:
        cout << "You've entered wrong type: " << type << endl;
        break;
    }
}