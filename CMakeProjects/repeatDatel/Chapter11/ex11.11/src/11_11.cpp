#include "Array.h"
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    Array a( 10, 10 );
    a.getVersion();
    int b, c;
    cout << "Array is:\n" << a;
    cout << "\nInput row, column:\n";
    cin >> b >> c;
    a( b, c );
    cin.get();
    return 0;
}