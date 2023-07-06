#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "config.h"
namespace Currency{
    const int ONE = 1; const int TWO = 2; const int THREE = 3; const int FIVE = 5;
    const int TEN = 10; const int FIFTY = 50; const int HUNDREED = 100;
}
using namespace Currency;
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nExersise 23.4, namespace, const cast.\n";
    int a = *( const_cast< int * > ( &ONE )); 
    cout << a << " a + 3 = " << (a += 3) << endl;
    return 0;
}
