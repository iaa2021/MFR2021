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
using std::count;
using std::for_each;
using std::transform;
bool greater9(int);
void calculateSquare(int);
int outputCube(int);
int main()
{
    srand(time(0));
    const int Size = 20;
    int array[Size];
    for (size_t i = 0; i < Size; i++)
    {
        array[i] = rand() % 30 + 1;
    }
    vector<int>v(array, array + Size);
    ostream_iterator <int> output(cout, ", ");
    cout << "Vector v consists of:\n";
    copy(v.begin(), v.end(), output);
    cout << "\nMininum element in vector v is: " << *(std::min_element(v.begin(), v.end())) << endl;
    cout << "Maxinum element in vector v is: " << *(std::max_element(v.begin(), v.end())) << endl;
    int a;
    cout << "\nInput value, you'd like to count in vector v:\n";
    cin >> a;
    cout << "\nVector v contains " << count(v.begin(), v.end(), a) << " elements equals " << a << "." << endl;
    cout << "\nVector v contains " << count_if(v.begin(), v.end(), greater9) << " elements greater than 9." << endl;
    cout << "Total in vector v is " << accumulate(v.begin(), v.end(), 0) << endl;
    cout << "The square of every element in vector v is:\n";
    for_each(v.begin(), v.end(), calculateSquare);
    cout << "\nThe cube of every element of vector v is:\n";
    vector<int> cubes(Size);
    transform(v.begin(), v.end(), cubes.begin(), outputCube);
    copy(cubes.begin(), cubes.end(), output);
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
    cout << number * number << ", ";
}
int outputCube(int number)
{
    return number * number * number;
}