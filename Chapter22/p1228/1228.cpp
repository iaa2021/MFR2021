#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;
template <class T>
void printVector( const vector <T> );
int main()
{
    const int Size = 6;
    int array[ Size ] = { 1, 2, 3, 4, 5, 6 };
    vector <int> integers;
    cout << "The initial size of vector integers is: " << integers.size() << endl;
    cout << "The initial capacity of vector integers is: " << integers.capacity() << endl;
    for (size_t i = 0; i < Size; i++)
    {
        integers.push_back( array[i] );
    }
    cout << "Some elements were inserted in integers.\n";
    cout << "The initial size of vector integers is: " << integers.size() << endl;
    cout << "The initial capacity of vector integers is: " << integers.capacity() << endl;
    cout << "\nOutput array using pointer notation:\n";
    for (int *ptr = array; ptr != array + Size; ++ptr)
    {
        if( ptr == array + Size - 1 )
        cout << *ptr << endl;
        else
        cout << *ptr << ", ";
    }
    cout << "\nOutput vector using iterator notation:\n";
    printVector( integers );
    cout << "\nReversed content of vector integers:\n";
    vector<int>::const_reverse_iterator rI;
    for ( rI = integers.rbegin(); rI != integers.rend(); ++rI )
    {
        cout << *rI << ' ';
    }
    cout << endl;
    return 0;
}
template <class T>
void printVector( const vector <T> integers1 )
{
    typename vector<T>::const_iterator cI;
    for ( cI = integers1.begin(); cI != integers1.end(); ++cI )
    {
        if( cI == integers1.end() - 1 )
        cout << *cI << endl;
        else
        cout << *cI << ", ";
    }
    


}