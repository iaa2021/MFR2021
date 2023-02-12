#include "Polinom.h"
#include "config.h"
int main()
{
    cout << "\nProject version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    int a;
    cout << "Input maximum pow for polinom: "; cin >> a;
    Polinom p1( a );
    p1.print();
    return 0;
}