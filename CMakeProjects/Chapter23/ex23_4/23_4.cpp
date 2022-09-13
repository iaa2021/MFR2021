#include <iostream>
using std::cout;
using std::endl;
using std::cin;
namespace Currency
{
    const volatile int ONE = 11;
    const int TWO = 22;
    const int THREE = 33;
    const int FOUR = 44;
    const volatile int FIVE = 55;
};
using namespace Currency;
const int changeNumber( int );
int main()
{
    cout << changeNumber( ONE ) << endl;
    const_cast<int&>(ONE) += 127;
    cout << ONE << endl;
    cout << changeNumber( FIVE ) << endl;
    const_cast<int&>(FIVE) += 127;
    cout << FIVE << endl;
    return 0;
}
const int changeNumber( int number )
{
    return const_cast<int&>( number ) += 100;
}
