#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
#include <queue>
using std::queue;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
#include <iomanip>
using std::setprecision;
int main()
{
    srand( time( 0 ) );
    cout << fixed << setprecision( 2 );
    queue < double > values;
    cout << "Pushing elements into values.\n";
    for (size_t i = 0; i < 10; i++)
    {
        values.push( static_cast< double >( rand()%100 + 1 ) );
    }
    cout << "\nPopping elements from values.\n";
    while ( !values.empty() )
    {
        cout << values.front() << ' ';
        values.pop();
    }
    
    cout << endl;
    return 0;
}