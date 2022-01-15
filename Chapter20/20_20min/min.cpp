#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setw;
#include <ctime>
using std::time;
#include <cstdlib>
using std::rand;
using std::srand;
#include <list>
using std::list;
#include <iterator>
using std::iterator;
using std::ostream_iterator;
void searchList( int, list<int> );
int main()
{
    srand( time( 0 ) );
    list<int> intList;
    for( int i = 0; i < 10; i++ )
    intList.push_back( rand()%100 + 1 );

    cout << "List in ascending order:\n";
    copy( intList.begin(), intList.end(), ostream_iterator< int >( cout, ", " ) );
    cout << "\nList in descending order:\n";
    copy( intList.rbegin(), intList.rend(), ostream_iterator< int >( cout, ", " ) );
    cout << endl;
    cout << "Trying to remove duplicates.\n";
    intList.unique();
    cout << "List in ascending order:\n";
    copy( intList.begin(), intList.end(), ostream_iterator< int >( cout, ", " ) );
    int number;
    cout << "Input number, you'd like to search.\n";
    cin >> number;
    searchList( number, intList );
    return 0;
}
void searchList( int number, list<int>intList )
{
    
    int count = 1;
    for( auto it = intList.begin(); it != intList.end(); ++it  )
    {
        if( *it == number )
        cout << "Desired value " << number << " is situated in " << count << " position.\n";
        else
        {
            count++;
        }
    }
}