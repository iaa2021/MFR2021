#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <algorithm>
using std::max;
using std::min;
int main()
{
    cout << "The maximum of 12 and 7 is " << max( 12, 7 ) << endl;
    cout << "The minimum of 12 and 7 is " << min( 12, 7 ) << endl;
    cout << "The maximum of A and F is " << max( 'A', 'F' ) << endl;
    cout << "The minimum of A and F is " << min( 'A', 'F' ) << endl;
    cin.get();
    return 0;
}