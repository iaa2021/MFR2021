#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::copy;
using std::replace_if;
using std::replace_copy_if;
#include <cstdlib>
using std::rand;
using std::srand;
#include <iterator>
using std::ostream_iterator;
#include <vector>
using std::vector;
#include <ctime>
using std::time;
#include "config.h"
#include <numeric>
#include <random>
using std::shuffle;
bool greater9( int );
void outputSquare( int );
int calculateCube( int );
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    cout << "\nDemonstration of includes, set_difference,\n";
    cout << " set_±ntersection, set_symmetric__dif ference и set__union.\n";  
    int size = 10, size1 = 5;//size of array and vectors
    int value, value1;//value for marking deletion and compare
    ostream_iterator<int> it( cout, ", " ); srand( time( 0 ) );
    int *array1 = new int[ size ];
    for (int i = 0; i < size; i++)
    {
        array1[ i ] = rand()%50 + 1;
    }
    int *array2 = new int[ size1 ];
    array2[ 0 ] = array1[ 0 ]; 
    for (int i = 1; i < size1; i++)
    {
        array2[ i ] = rand()%50 + 1;
    }
    int *array3 = new int[ size1 ]; int j = 5;
    for (int i = 0; i < size1; i++)
    {
        array3[ i ] = array1[ j ];
        j++;
    }
    cout << "\nArray1 contains:\n";
    copy( array1, array1 + size, it );
    cout << "\nArray2 contains:\n";
    copy( array2, array2 + size1, it );
    cout << "\nArray3 contains:\n";
    copy( array3, array3 + size1, it );
    cout << "\nNow we finding out, array1 consists whole array2 or not, ";
    cout << " and relatively array3 we make the same.\n";
    if( std::includes( array1, array1 + size,  array2, array2 + size1 ) )
    cout << "\nArray1 includes whole array2.\n";
    else
    cout << "\nArray1 doesn't include whole array2.\n";
    if( std::includes( array1, array1 + size,  array3, array3 + size1 ) )
    cout << "\nArray1 includes whole array3.\n";
    else
    cout << "\nArray1 doesn't include whole array3.\n";
    vector<int>diff;
    cout << "\nNow we seeking for intersection between array1 and array3.\n";
    std::set_intersection( array1, array1 + size,  array2, array2 + size1, std::back_inserter( diff ) );
    cout << "\n\nset_difference of al and a2 is:\n ";
    copy( diff.begin(), diff.end(), it ); 
    cout << "\nNow we seeking for anti intersection between array1 and array3.\n";
    diff.clear();
    std::set_symmetric_difference( array1, array1 + size,  array2, array2 + size1, std::back_inserter( diff ) );
    cout << "\n\nset_symmetric_difference of al and a2 is:\n ";
    copy( diff.begin(), diff.end(), it ); 
    diff.clear();
    std::set_symmetric_difference( array1, array1 + size,  array3, array3 + size1, std::back_inserter( diff ) );
    cout << "\n\nset_symmetric_difference of al and a3 is:\n ";
    copy( diff.begin(), diff.end(), it );
    cout << "\nWe seek for elements situated in array1 or in array3, or both.\n";
    diff.clear();
    std::set_union( array1, array1 + size,  array2, array2 + size1, std::back_inserter( diff ) );
    cout << "\n\nset_union of al and a2 is:\n ";
    copy( diff.begin(), diff.end(), it );
    cout << endl;
    return 0;
}