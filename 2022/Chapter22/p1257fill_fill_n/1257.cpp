#include <iostream>
using std::cout;
using std::endl;
#include <algorithm>
using std::fill_n;
using std::fill;
using std::copy;
using std::generate;
using std::generate_n;
#include <iterator>
using std::ostream_iterator;
#include <vector>
using std::vector;
char nextLetter();
int main()
{
    vector < char > chars( 10 );
    ostream_iterator < char > output( cout, " " );
    fill( chars.begin(), chars.end(), '5' );
    cout << "After filling 5 vector chars consists of:\n";
    copy( chars.begin(), chars.end(), output );
    fill_n( chars.begin(), 5, 'A' );
    cout << "\nAfter filling 5 first elements with A vector chars consists of:\n";
    copy( chars.begin(), chars.end(), output );
    generate( chars.begin(), chars.end(), nextLetter );
    cout << "\nAfter generating elements with nextLetter function vector chars consists of:\n";
    copy( chars.begin(), chars.end(), output );
    generate_n( chars.begin(), 5, nextLetter );
    cout << "\nAfter generating first 5 elements with nextLetter function vector chars consists of:\n";
    copy( chars.begin(), chars.end(), output );
    cout << endl;
    return 0;
}
char nextLetter()
{
    static char letter = 'A';
    return letter++;
}