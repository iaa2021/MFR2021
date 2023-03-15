#include "ToolStore.h"
#include "config.h"
void createTextFile( fstream & );
void makeNewRecord( fstream & );
void outputLine( ostream &, const ToolStore & );
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    ToolStore::printVersion();
    fstream inOutStore( "store.txt", ios::in|ios::out );
    if( !inOutStore )
    {
        cerr << "File cannot be opened by inOutStore.\n";
        exit( 1 );
    }
    makeNewRecord( inOutStore );
    createTextFile( inOutStore );
    return 0;
}
void outputLine( ostream &output, const ToolStore &record )
{
    output << record.getNumber() << ' ' << record.getName();
    output << fixed << showpoint << setprecision( 2 ) << record.getPrice();
    output << ' ' << record.getQwantity() << endl;
}
void createTextFile( fstream &readFromFile )
{
    ofstream outFile( "print.txt", ios::out );
    if( !outFile )
    {
        cerr << "File cannot be opened.\n";
        exit( 1 );
    }
    ToolStore record;
    outFile << "Number" << ' ' << "Tool's name" << ' ' << "Price" << ' ' << "Qwantity\n";
    readFromFile.seekg( 0 );
    readFromFile.read( reinterpret_cast<char *>(&record), sizeof(ToolStore) );
    while ( !readFromFile.eof() )
    {
        if (record.getNumber() != 0)
        outputLine( outFile, record );
        //to read next record
        readFromFile.read( reinterpret_cast<char *>(&record), sizeof(ToolStore) );
    }
}
void makeNewRecord( fstream & createNewRecord )
{
    cout << "Input number of tool's position( more than 0 ):\n ";
    int toolNumber;
    cin >> toolNumber;
    ToolStore record;
    createNewRecord.seekg( ( toolNumber - 1 ) * sizeof( ToolStore ) ) ;
    createNewRecord.read( reinterpret_cast<char *>( &record ), sizeof(ToolStore) );
    if ( record.getNumber() != 0 )
    {
        cout << "Such record already exists.\n";
    }
    else
    {
        string tName; int tQuantity; double tPrice;
        record.setNumber( toolNumber );
        cout << "Input tool's name, price, quantity: ";
        cin >> tName >> tPrice >> tQuantity;
        record.setName( tName ); record.setPrice( tPrice ); 
        record.setQwantity( tQuantity);
        createNewRecord.seekp(( toolNumber - 1 ) * sizeof( ToolStore ) );
        createNewRecord.write( reinterpret_cast<const char *>(&record), sizeof(ToolStore) );
    }
    
}