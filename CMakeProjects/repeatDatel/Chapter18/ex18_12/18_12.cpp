#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
int main()
{
    string question = "hello"; int right = 0, count = 0; 
    char letter;
    string answer, result;
    string gibbet[ 7 ] = { " 0 \n", "/", "|", ")\n", " |\n", "/", " )" };
    cout << "Guess the word XXXXX, by input letters:\n";
    cin >> letter;
    while ( count < 8 )
    {
        if( letter == question.at( right ) )
        {
            answer += letter;
            right++;
            if ( answer == question )
            {
                cout << "Well done, the word is: " << answer << endl;;
                break;
            }
            else
            cout << "\nInput next letter:\n? ";
        }
        else
        {
            result += gibbet[ count ];
            cout << result << endl; count++;
            if( count == 7 && answer != question )
            {
                cout << "You've missed.\n";
                break;
            }
            else
           { 
                cout << "You've done " << count << " wrong attempts.\n";
                cout << "Try again:\n? ";
            }
        }
        cin >> letter;
    }
    return 0;
}