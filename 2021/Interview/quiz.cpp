#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
using namespace std;
struct Quiz
{
    string questions[ 5 ] = { "question1", "question2", "question3", "question4", "question5" };
    string answers[ 15 ] = { "answ1", "answ2 ", "answ3 ", "answ1", "answ2 ", "answ3 ", "answ1", "answ2 ", "answ3 ", "answ1", "answ2 ", "answ3 ", "answ1", "answ2 ", "answ3 " } ;
    int marks[ 15 ] = { 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0 };
};
void makeInterview( Quiz &q )
{
    int mark; int result = 0;
    cout << "Answer questions by choosing you variant from offered below: " << endl;
    for( int i = 0; i < 5; i++ )
    {
        cout << q.questions[ i ] << endl;
        {
            for( int j = i * 3; j < ( i * 3 ) + 3; j++ )
            cout << q.answers[ j ] << endl;
        }
        cout << "Input your variant: " << endl;
        cin >> mark;
        if( q.marks[ ( i * 3 ) + mark - 1 ] == 1 )
        {
            cout << "Your answer is right.\n" << endl;
            result++;
        }
        else
        cout << "Your answer is wrong.\n" << endl;
    }
    cout << "You've given " << result << " right answers.\n\n";
}
int main()
{
    Quiz quiz;
    makeInterview( quiz );
    getch();
    return 0;
}