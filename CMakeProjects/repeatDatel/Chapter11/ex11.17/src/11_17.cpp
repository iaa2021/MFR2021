#include "Polinom.h"
#include "config.h"
int main()
{
    cout << "Project version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    Polinom::getVersion();
    int a;
    cout << "Input maximum pow for polinom: "; cin >> a;
    Polinom p1( a );
    p1.print();
    cout << "Input maximum pow for polinom: "; cin >> a;
    Polinom p2( a );
    p2.print();
    Polinom p3;
    p3 = p1 + p2;
    cout << "\nPolinom1 + polinom2 =\n";
    p3.print();
    return 0;
}