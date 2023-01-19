#include "IntegerSet.h"
#include "config.h"
IntegerSet::IntegerSet()
{
    for (int i = 0; i < 100; i++)
    {
        array[ i ] = 0;
    }
    for (int i = 0; i < 50; i++)
    {
        int a = rand()%100;
        array[ a ] = 1;
    }
}
void IntegerSet::unionOfSets( IntegerSet &a )
{
    int *ptr = new int[100];
    for (int i = 0; i < 100; i++)
    {
        ptr[ i ] = 0;
    }
    for (int i = 0; i < 100; i++)
    {
        if( array[ i ] == 1 || a.array[ i ] == 1 )
        ptr[ i ] = 1;
    }
    cout << "\nUnion of sets is:\n";
    int count = 0;
    for (int i = 0; i < 100; i++)
    {
        if( ptr[ i ] == 1 )
        {
            cout << setw( 2 ) <<  i  << ", ";
            count++;
            if ( count  % 10 == 0 )
            cout << endl;
        }
    }
    cout << "\nUnion of sets contains " << count << " elements.\n";
    delete [] ptr;
}
void IntegerSet::intersectionOfSets( IntegerSet &a )
{
    int *ptr = new int[100];
    for (int i = 0; i < 100; i++)
    {
        ptr[ i ] = 0;
    }
    
    for (int i = 0; i < 100; i++)
    {
        if( array[ i ] == 1 && a.array[ i ] == 1 )
        ptr[ i ] = 1;
    }
    cout << "\nIntersection of sets is:\n";
    int count = 0;
    for (int i = 0; i < 100; i++)
    {
        if( ptr[ i ] == 1 )
        {
            cout << setw( 2 ) << i << ", ";
            count++;
            if ( count % 10 == 0 )
            cout << endl;
        }
    }
    delete [] ptr;
    cout << "\nIntersection of sets contains " << count << " elements.\n";
}
void IntegerSet::print()
{
    int count = 0;
    for (int i = 0; i < 100; i++)
    {
        if( array[ i ] == 1 )
        {
            cout << i << ", ";
            count++;
        if ( count % 10 == 0 )
        cout << endl;
        }
    }
}
void IntegerSet::getVersion()
{
    cout << "\nLibrary version is: " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH)<< endl;
}