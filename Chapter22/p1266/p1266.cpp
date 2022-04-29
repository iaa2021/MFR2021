#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <vector>
using std::vector;
#include <iterator>
using std::ostream_iterator;
#include <numeric>
using std::accumulate;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <algorithm>
using std::copy;

bool greater9(int);
void calculateSquare(int);
int outputCube(int);
int main()
{
    srand(time(0));
    const int Size = 10;
    int array[Size];
    for (size_t i = 0; i < Size; i++)
    {
        array[i] = rand() % 30 + 1;
    }
    vector<int>v(array, array + Size);
    ostream_iterator <int> output(cout, ", ");
    cout << "Before rundom shuffle vector v consists of:\n";
    copy(v.begin(), v.end(), output);
    cout << "\nMininum element in vector v is: " << *( std::min_element( v.begin(), v.end() ) ) << endl;
    cout << endl;
    cin.get();
    return 0;
}
bool greater9(int number)
{
    return number > 9;
}
void calculateSquare(int number)
{
    cout << number * number << endl;
}
int outputCube(int number)
{
    return number * number * number;
}