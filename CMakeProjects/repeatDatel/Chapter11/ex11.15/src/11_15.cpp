#include "RationalNumber.h"
#include "config.h"
int main()
{
    int a, b;
    cout << "\nProject version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    RationalNumber r1;
    r1.getVersion();
    cout << "Input nominator, than denominator, which must be greater than 0:\n";
    cin >> a >> b;
    r1.setRN( a, b );
    cout << "RN1 is: "; r1.print();
    RationalNumber r2, r3;
    cout << "\nInput nominator, than denominator, which must be greater than 0:\n";
    cin >> a >> b;
    r2.setRN( a, b );
    cout << "RN2 is: "; r2.print();
    cout << endl;
    r3 = r1 + r2;
    r1.print(); cout << " + "; r2.print(); cout << " = "; r3.print();
    cout << endl;
    r3 = r1 - r2;
    r1.print(); cout << " - "; r2.print(); cout << " = "; r3.print();
    cout << endl;
    r3 = r1 * r2;
    r1.print(); cout << " * "; r2.print(); cout << " = "; r3.print();
    cout << endl;
    return 0;
}