#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
#include <cstdlib>
using std::atoi;
using std::atof;
#include <iomanip>
using std::setprecision;
int main()
{
    const char *a = "147"; const char *b = "258"; const char *c = "369"; const char *d = "753";
    int e, f, g, h, sum;
    e = atoi( a ); f = atoi( b ); g = atoi( c ); h = atoi( d ); 
    cout  << "Strings type const char* are folowing:\n";
    cout << "a = " << a << "\nb = " << b << "\nc = " << c << "\nd = "<< d << endl;
    sum = e + f + g + h;
    cout << "These strings were converted into integer values,\nand their sum is " << sum << endl;
    const char *a1 = "147.21"; const char *b1 = "258.54"; const char *c1 = "369.85"; const char *d1 = "753.97";
    double e1, f1, g1, h1, sum1;
    e1 = atof( a1 ); f1 = atof( b1 ); g1 = atof( c1 ); h1 = atof( d1 ); 
    cout  << "Strings type const char* are folowing:\n";
    cout << "a1 = " << a1 << "\nb1 = " << b1 << "\nc1 = " << c1 << "\nd1 = "<< d1 << endl;
    sum1 = e1 + f1 + g1 + h1;
    cout << fixed << setprecision( 2 );
    cout << "These strings were converted into double values,\nand their sum1 is " << sum1 << endl;
    return 0;
}