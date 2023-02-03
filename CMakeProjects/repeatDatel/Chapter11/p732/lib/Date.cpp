#include <iostream>
using std::endl;
using std::cout;
#include "Date.h"
const int Date::days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
Date::Date( int m, int d, int y )
{
    setDate( m, d, y );
}
void Date::setDate( int mm, int dd, int yy )
{
    month = ( mm >= 1 && mm <= 12 ? mm : 1 );
    year = ( yy >= 1950 && yy <= 2100 ? yy : 1950 );
    if( month == 2 && leapYear( year ) )
    day = ( dd >= 1 && dd <= 29 ? dd : 1 );
    else
    day = ( dd <= days[ mm ] ? dd : 1 );
}
Date &Date::operator++()//prefix increment
{
    helpIncrement();
    return *this;
}
Date Date::operator++( int )//prefix increment
{
    Date temp = *this;
    helpIncrement();
    return temp;
}
const Date &Date::operator+=( int addDays )
{
    for (int i = 0; i < addDays; i++)
    {
        helpIncrement();
    }
    return *this;
}
bool Date::leapYear( int testYear ) const
{
    if( testYear % 400 == 0 || ( testYear % 100 != 0 && testYear % 4 == 0 ) )
    return true;
    else
    return false;
}
bool Date::endOfMonth( int testDay ) const
{
    if( month == 2 && leapYear( year )  )
    return testDay == 29;
    else 
    return testDay == days[ month ];
}
void Date::helpIncrement()
{
    if( !endOfMonth( day ) )//not last day of month
    day++;
    else
    if( month < 12 )//last day in the middle of year
    {
        month++;
        day = 1;
    }
    else//last day of the year
    {
        year++;
        month = 1;
        day = 1;
    }
}
ostream & operator<<( ostream &output, const Date &d )
{
    static char *monthName[ 13 ] = { "", "January", "February",
    "March", "April", "May", "June", "July", "August",
    "September", "October", "November", "December" }; 
    output << monthName[ d.month ] << ' ' << d.day << ' ' << d.year << endl;
    return output;
}
void Date::getVersion()
{
    cout << "\nLibrary version is: " << (PROJECT_VERSION_MAJOR) << '.' << (PROJECT_VERSION_MINOR) << '.';
    cout << (PROJECT_VERSION_PATCH) << endl;
}