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
    return 0;
}