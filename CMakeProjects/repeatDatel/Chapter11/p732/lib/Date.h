#ifndef DATE_H
#define DATE_H
#include <iostream>
using std::ostream;
#include "config.h"
class Date
{
friend ostream &operator<<( ostream &, const Date & );
public:
    Date( int = 1, int = 1, int = 1950 );
    void setDate( int, int, int );
    Date &operator++();//prefix increment
    Date operator++( int );//postfix increment
    const Date &operator+=( int );
    bool leapYear( int ) const;// is year leap?
    bool endOfMonth( int ) const;
    void getVersion();
private:
    int month; 
    int day;
    int year;
    static const int days[];
    void helpIncrement();
};
#endif