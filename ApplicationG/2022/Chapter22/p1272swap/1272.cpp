#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <iterator>
using std::ostream_iterator;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <algorithm>
using std::sort;
using std::swap;
using std::iter_swap;
using std::swap_ranges;
int main()
{
    srand( time(0) );
    const int Size = 20;
    int array[Size];
    for (size_t i = 0; i < Size; i++)
    {
        array[ i ] = rand()%30 + 1;
    }
    ostream_iterator<int> output( cout, ", " );
    cout << "Array contains:\n";
    copy( array, array + Size, output );
    sort( array, array + Size );
    cout << "\nAfter sorting array contains:\n";
    copy( array, array + Size, output );
    swap( array[0], array[5] );
    cout << "\nAfter swaping array[0] and array[5] array contains:\n";
    copy( array, array + Size, output );
    iter_swap( &array[0], &array[5] );
    cout << "\nAfter iter_swap array[0] and array[5] array contains:\n";
    copy( array, array + Size, output );
    swap_ranges( array, array + 5, array + 5 );
    cout << "\nAfter swap_ranges first 5 elements with last 5 elements array contains:\n";
    copy( array, array + Size, output );
    cin.get();
    return 0;
}
