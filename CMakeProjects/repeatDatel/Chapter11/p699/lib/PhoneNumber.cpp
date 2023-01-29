#include "PhoneNumber.h"
#include <iomanip>
using std::setw;
#include "config.h"
ostream &operator<<( ostream &output, const PhoneNumber &number )
{
    output << "(" << number.areaCode << ") " << number.exchange << " - " << number.line;
    return output;
}
istream &operator>>( istream &input, PhoneNumber &number )
{
    input.ignore();
    input >> setw( 3 ) >> number.areaCode;
    input.ignore( 2 );
    input >> setw( 3 ) >> number.exchange;
    input.ignore();
    input >> setw( 4 ) >> number.line;
    return input;
}
void PhoneNumber::getVersion()
{
    cout << "Library version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
}