#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <vector>
using std::vector;
#include <iterator>
using std::ostream_iterator;
using std::back_inserter;
#include <algorithm>
using std::copy;
using std::includes;
using std::set_difference;
using std::set_intersection;
using std::set_symmetric_difference;
using std::set_union;
int main()
{
    const int Size1 = 10, Size2 = 5, Size3 = 20;
    int array1[ Size1 ];
    for (size_t i = 0; i < Size1; i++)
    {
        array1[ i ] = i + 1;
    }
    int array2[ Size2 ] = { 4, 5, 6, 7, 8 };
    int array3[ Size3 ] = { 4, 5, 6, 11, 15 };
    ostream_iterator<int> output( cout, ", " );
    cout << "Array1 contains: ";
    copy( array1, array1 + Size1, output );
    cout << "\nArray2 contains: ";
    copy( array2, array2 + Size2, output );
    cout << "\nArray3 contains: ";
    copy( array3, array3 + Size3, output );
    if( includes( array1, array1 + Size1, array2, array2 + Size2 ) )
        cout << "\nArray1 includes array2.\n";
    else
        cout << "\nArray1 doesn't includes array2.\n";
    if( includes( array1, array1 + Size1, array3, array3 + Size3 ) )
        cout << "Array1 includes array3.\n";
    else
        cout << "Array1 doesn't includes array3.\n";
    int difference[ Size1 ];
    int *ptr = set_difference( array1, array1 + Size1, array2, array2 + Size2, difference );
    cout << "\nset_difference between array1 and array2 is:\n";
    copy( difference, ptr, output );
    int intersection[ Size1 ];
    ptr = set_intersection( array1, array1 + Size1, array2, array2 + Size2, intersection );
    cout << "\nset_intersection between array1 and array2 is:\n";
    copy( intersection, ptr, output );   
    int symmetric_difference[ Size1 + Size2 ];
    ptr = set_symmetric_difference( array1, array1 + Size1, array3, array3 + Size3, symmetric_difference );
    cout << "\nset_symmetric_difference between array1 and array3 is:\n";
    copy( symmetric_difference, ptr, output );
    int unionSet[ Size3 ];
    ptr = set_union( array1, array1 + Size1, array3, array3 + Size3, unionSet );
    cout << "\nset_union of array1 and array3 is:\n";
    copy( unionSet, ptr, output );
    cout << endl;
    return 0;
}