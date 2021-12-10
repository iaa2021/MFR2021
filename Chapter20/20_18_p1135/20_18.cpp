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
    int array[20] = {-1}; int a;
    int check[20] = {0};
    for( int i = 0; i < 20; i++ )
    {
        do
        {
            a= rand()%20;
            check[a] = 1;
        }
         while( check[a] != 1 );  
         array[i] = a;
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