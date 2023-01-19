#include "IntegerSet.h"
#include "config.h"
int main()
{
    srand( time( 0 ) );
    IntegerSet a1;
    a1.getVersion();
    cout << "\nProject version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH)<< endl;
    cout << "\nFirst array is:\n";
    a1.print();
    IntegerSet a2;
    cout << "\nSecond array is:\n";
    a2.print();
    a1.unionOfSets( a2 );
    a1.intersectionOfSets( a2 );
    a1.isEqualTo( a2 );
    return 0;
}