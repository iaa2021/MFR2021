#include<iostream>
using std::cout;
#include<cctype>
using std::iscntrl;
using std::isgraph;
using std::isprint;
using std::ispunct;
using std::isspace;

int main()
{
    cout << "According to isspace:\nNew line is " << (isspace('\n')? "a ": "not a ") << "whitespace character.";
    cout << "\nHorizontal tab is " << (isspace('\t')? "a ": "not a ") << "whitespace character.";
    cout << '\n' << (isspace('%')? "% is a ": "% is not a ") << "whitespace character.\n";
    cout << "According to isctrl:\nNew line is " << (iscntrl('\n')? "a ": "not a ") << "control character.\n";
    cout << (isspace('$')? "$ is a ": "$ is not a ") << "control character.\n";
    cout << "According to ispunct:\n" << (ispunct(';')? "; is a ": "; is not a ") << "punctuation character.\n";
    cout << (ispunct('Y')? "Y is a ": "Y is not a ") << "punctuation character.\n";
    cout << (ispunct('#')? "# is a ": "# is not a ") << "punctuation character.\n";
    cout << "According to isprint:\n" << (isprint('$')? "$ is a ": "$ is not a ") << "printing character.\n";
    cout << "alert " << (isprint('\a')? " is a ": " is not a ") << "printing character.\n";
    cout << "space " << (isprint(' ')? " is a ": " is not a ") << "printing character.\n";
    cout << "According to isgraph:\n" << (isgraph('Q')? "Q is a ": "Q is not a ") << "printing character other than a space.\n";
    cout << "space " << (isgraph(' ')? " is a ": " is not a ") << "printing character other than a space.\n";
    return 0;
}