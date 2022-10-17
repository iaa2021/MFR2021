#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstdlib>
using std::rand;
using std::srand;
#include <ctime>
using std::time;
int main()
{
    srand(time(0));
    int array[20] = {0}; int a, i=0;
    int check[20] = {0};
    while( i < 20 )
    {
        a = rand()%20;
        if( check[a] == 0 )
        {
            array[i] = a;
            check[a] = 1;
            i++;
        }
    }
    
    for( int i = 0; i < 20; i++ )
    {
        cout << array[i] << ", ";
    }
    cout << endl;
    for( int i = 0; i < 20; i++ )
    {
        cout << check[i] << ", ";
    }
    cout << endl;
    return 0;
}