
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand( time(0) );
    int m, k, n;
    m = 10 + rand()%10;
    cout << "Array's size is " << m << endl;
    vector< vector<int> > blockArray( 10, vector<int>( m ) );//vector of block sorting
    vector<int> array;
    for( int i = 0; i < m; i++ )
    { array.push_back( 1 + rand()% 300); }
    cout << "Original array is:\n";
    for( int i = 0; i < m; i++ )
    { cout << array[i] << ", "; }
    cout << "\nDistributing passage: " << endl;
    for( int i = 0; i < m; i++ )
    {
        k = 0;
        n = array[i] % 10;
        while( blockArray[n][k] != 0 )
        {  k++; }
        blockArray[n][k] = array[i];
    }
    for( int i = 0; i < 10; i++ )
    {
        for( int j = 0; j < m; j++ )
        {
            cout << blockArray[i][j] << ", ";
        }
        cout << endl;
    }
    cout << endl;
    array.clear();
    for( int i = 0; i < 10; i++ )
    {
        for( int j = 0; j < m; j++ )
        {
            if( blockArray[i][j] != 0 )
            {
                array.push_back( blockArray[i][j] );
            }

        }
    }
    cout << "New array is:\n";
    for( size_t i = 0; i < array.size(); i++ )
    { cout << array[i] << ", "; }
    cout << "\nNext passage: " << endl;
    for( int i = 0; i < 10; i++ )
    {
        for( int j = 0; j < m; j++ )
             blockArray[i][j] = 0;
    }
    for( int i = 0; i < m; i++ )
    {
        k = 0;
        n = ( array[i] / 10 ) % 10;
        while( blockArray[n][k] != 0 )
        {  k++; }
        blockArray[n][k] = array[i];
    }
    array.clear();
    for( int i = 0; i < 10; i++ )
    {
        for( int j = 0; j < m; j++ )
        {
            if( blockArray[i][j] != 0 )
            {
                array.push_back( blockArray[i][j] );
            }

        }
    }
    cout << "New array is:\n";
    for( size_t i = 0; i < array.size(); i++ )
        { cout << array[i] << ", "; }
    cout << "\nNext passage: " << endl;
    for( int i = 0; i < 10; i++ )
    {
        for( int j = 0; j < m; j++ )
             blockArray[i][j] = 0;
    }
    for( int i = 0; i < m; i++ )
    {
        k = 0;
        n = ( array[i] / 100 ) % 10;
        while( blockArray[n][k] != 0 )
        {  k++; }
        blockArray[n][k] = array[i];
    }
    array.clear();
    for( int i = 0; i < 10; i++ )
    {
        for( int j = 0; j < m; j++ )
        {
            if( blockArray[i][j] != 0 )
            {
                array.push_back( blockArray[i][j] );
            }

        }
    }
    cout << "New array is:\n";
    for( size_t i = 0; i < array.size(); i++ )
        { cout << array[i] << ", "; }
      cout << "\nNext passage: " << endl;
    for( int i = 0; i < 10; i++ )
    {
        for( int j = 0; j < m; j++ )
             blockArray[i][j] = 0;
    }
    for( int i = 0; i < m; i++ )
    {
        k = 0;
        n = ( array[i] / 1000 ) % 10;
        while( blockArray[n][k] != 0 )
        {  k++; }
        blockArray[n][k] = array[i];
    }
    array.clear();
    for( int i = 0; i < 10; i++ )
    {
        for( int j = 0; j < m; j++ )
        {
            if( blockArray[i][j] != 0 )
            {
                array.push_back( blockArray[i][j] );
            }

        }
    }
    cout << "New array is:\n";
    for( size_t i = 0; i < array.size(); i++ )
        { cout << array[i] << ", "; }
        cout << endl;
    return 0;
}
