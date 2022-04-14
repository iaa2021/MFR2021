#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iterator>
using std::istream_iterator;
using std::ostream_iterator;
int main()
{
    cout << "Input two integers:\n";
    istream_iterator<int> inputInt( cin );
    int number1 = *inputInt;
    ++inputInt;
    int number2 = *inputInt;
    ostream_iterator<int> outputInt( cout );
    cout << "\nThe sum is: ";
    *outputInt = number1 + number2;
    cout << endl;
    return 0;
}