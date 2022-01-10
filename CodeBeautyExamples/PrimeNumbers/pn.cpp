#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <iomanip>
using std::setw;
bool searchPN(int);
int main()
{
    int limit, count = 0;
    vector<int> numbers;
    cout << "Input interval for prime numbers search\n";
    cin >> limit;
    for( int i = 2; i < limit; i++ )
    {
        if( searchPN( i ) )
        {
            numbers.push_back( i );
            count++;
        }
    }
    cout << "There are " << count << " prime numbers among 1 to " << limit << ".\n";
    for( size_t i = 0; i < numbers.size(); i++ )
    {
        cout << setw(2) << numbers[i] << ", ";
        if( (i + 1) % 10 == 0 )
        cout << endl;
    }
    cout << endl;
    return 0;
}
bool searchPN( int number )
{
    for( int i = 2; i < number; i++ )
    {
        if( number % i == 0 )
        return false;
    }
    return true;
}

