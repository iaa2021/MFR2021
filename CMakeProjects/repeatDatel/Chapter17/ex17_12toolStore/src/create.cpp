#include "ToolStore.h"
#include "config.h"
int main()
{
    ofstream outStore( "store.txt", ios::binary );
    if( !outStore )
    {
        cerr << "File cannot be opened by outStore.\n";
        exit( 1 );
    }
    ToolStore store;
    for (int i = 0; i < 100; i++)
    {
        outStore.write( reinterpret_cast<const char *>(&store), sizeof(ToolStore));
    }
    cout << "File store.txt was created.\n";
    return 0;
}