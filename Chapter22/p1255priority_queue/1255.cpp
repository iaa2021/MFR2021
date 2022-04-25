#include <iostream>
using std::cout;
using std::endl;
#include <queue>
using std::priority_queue;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
int main()
{
    priority_queue < double > priorities;
    priorities.push( 1.23 );
    priorities.push( 9.34 );
    priorities.push(  3.78 );
    cout << "Popping from priorities:\n";
    while ( !priorities.empty() )
    {
        cout << priorities.top() << ' ';
        priorities.pop();
    }
    cout << endl;
    return 0;
}