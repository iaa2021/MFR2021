
#include <iostream>
using std::cout;
using std::endl;
#include "Visitor.h"
class Shop
{
private:
    Visitor *first;
    Visitor *last;
    int count;//count of visitors
public:
    Shop();
    void buyerArrive( int );
    void servise( int );
    bool isEmpty() const;
    void countMax();
};

Shop::Shop()
    : first(0), last(0), count(0)
{
}
bool Shop::isEmpty() const
{
    return first == 0;
}
void Shop::buyerArrive( int limit )
{
    int sum = 0; 
     while ( sum <= limit )
    {
        Visitor *ptr = new Visitor();
        if( isEmpty() )
    {
        ptr ->tirnTime = ptr ->tirnInterval;
        ptr ->leaveTime = ptr ->tirnInterval + ptr ->serviseInterval;
        first = last = ptr;
        sum = ptr ->tirnTime;
        count++;
    }
    else
    {
        last ->next = ptr;
        ptr ->tirnTime = last ->tirnTime + ptr ->tirnInterval;
        last = ptr;
        sum = ptr ->tirnTime; 
        count++;
    }
    }
    cout << "During " << limit/60 <<  " hours, shop was visited by " << count << " buyers.\n";
}
void Shop::servise( int limit )
{
    Visitor *current = first;
    current ->leaveTime = current ->tirnTime + current ->serviseInterval;
    int sum = current ->leaveTime;
    int count = 1;
    Visitor *temp = new Visitor();
     while ( sum <= limit )
     {
         temp = current ->next;
         if( ( current ->tirnTime + current ->serviseInterval ) <= temp ->tirnTime )
         temp ->leaveTime = temp ->tirnTime + temp ->serviseInterval;
         else
         temp ->leaveTime = current ->leaveTime + temp ->serviseInterval;
         sum = temp ->leaveTime;
         count++;
         current = current ->next;
     }
     cout << "During " << limit/60 <<  " hours, in shop were servised " << count << " buyers.\n";
}
void Shop::countMax()
{
    Visitor *current = first;
    int max = 0;
    while (current !=0)
    {
        if( ( current ->leaveTime - current ->tirnTime ) > max )
            max = current ->leaveTime - current ->tirnTime;

        current = current ->next;
    }
    cout << "Maximum indwelling time of client in the shop is " << max << " minutes.\n\n";

}