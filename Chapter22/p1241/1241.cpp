#include <iostream>
using std::cout;
using std::endl;
#include <algorithm>
using std::copy;
#include <iterator>
using std::ostream_iterator;
#include <deque>
using std::deque;

int main()
{
    deque <double> values;
    ostream_iterator < double > output ( cout, ", " );
    values.push_front( 2.2 );
    values.push_front( 3.5 );
    values.push_back( 1.1 );
    cout << "Values contains: ";
    copy( values.begin(), values.end(), output );
    values.pop_front();
    cout << "\nValues after pop_front contains: ";
    copy( values.begin(), values.end(), output );
    values.at(1) = 7.56;
    cout << "\nValues after modification values[1] to 7.56 contains: ";
    copy( values.begin(), values.end(), output );
    cout << endl;
    return 0;
}