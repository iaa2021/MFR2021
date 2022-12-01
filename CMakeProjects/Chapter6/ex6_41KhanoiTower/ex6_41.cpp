#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <stack>
using std::stack;
#include <cmath>
using std::pow;
#include <string>
using std::string;
struct peg
{
    stack <int>st;
    string name;
    int number = 0;
};
void khanoi( int, int, peg * );

int main()
{
    peg array[ 3];
    array[ 0 ].name = "a"; array[ 1 ].name = "b"; array[ 2 ].name = "c";
    int number, odd;
    cout << "Input number: ";
    cin >> number;
    if( number > 0 )
    {
        for (int i = number; i >= 1; i--)
        {
            array[ 0 ].st.push( i );
        }
        array[ 0 ].number = number;
    }
    if( number % 2 == 0 )
    odd = 1;
    else 
    odd = 0;
    cout << "odd is: " << odd << endl;
    khanoi( number, odd, array );
    cout << " Stack a contains " << array[ 0 ].number << endl;
    cout << " Stack b contains " << array[ 1 ].number << endl;
    cout << " Stack c contains " << array[ 2 ].number << endl;
    return 0;
}
void khanoi( int number, int odd, peg *array )
{
    int min = 1, max = array[ 0 ].st.top();
    for (int i = 0; i < 3; i++)
    {
        if( i == 0 && array[ 1 ].st.empty() && array[2].st.empty() )
        {
            if( ( array[ 0 ].st.top() + odd ) % 2 == 0 )
            {
                array[ 1 ].st.push( array[ 0 ].st.top() ); array[ 0 ].st.pop(); array[ 0 ].number--; array[ 1 ].number++;
                number--; cout << array[ 0 ].name << " -> " << array[ 1 ].name << endl;
            } 
            if( ( array[ 0 ].st.top() + odd ) % 2 != 0 )
            {
                array[ 2 ].st.push( array[ 0 ].st.top() ); array[ 0 ].st.pop(); array[ 0 ].number--; array[ 2 ].number++;
                number--; cout << array[ 0 ].name << " -> " << array[ 2 ].name << endl;
            }
        }

    }
    
    
    khanoi( number, odd, array );
}
