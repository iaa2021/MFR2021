#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include<vector>
using std::vector;
#include <algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;
int main()
{
    int value; ostream_iterator<int> it( cout, ", " );
    cout << "Input number: ";
    cin >> value;
    cout << "\nNumber has such odd deleters:\n";
    vector <int> deleters;
    for( int i = 2; i <= value/2; i++ )
    {
        if ( value % i == 0 )
        deleters.push_back(i);
    }
    copy( deleters.begin(), deleters.end(), it );
    return 0;
}