#include "ToolStore.h"
#include "config.h"
void createTextFile( fstream & );
void makeNewRecord( fstream & );
void outputLine( ostream &, const ToolStore & );
#include <string>
using std::string;
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
    int choice;
    cout << "Input your choice:\n";
    cout << "1 - create text file;\n2 - make new record;\n";
    cin >> choice;
    while (choice > 0)
    {
        switch ( choice )
        {
            case 1:
            createTextFile( inOutStore );
            break;
            case 2:
            makeNewRecord( inOutStore );
            break;
            default:
            cout << "\nYou've entered wrong choice.\n";
            break;
        }
        cout << "1 - create text file;\n2 - make new record;\n";
        cin >> choice;
    }
    inOutStore.clear();
    return 0;
}
void outputLine( ostream &output, const ToolStore &record )
{
    output << setw(5) << left << record.getNumber();
    output << setw( 20 ) << left << record.getName();
    output << left << setw( 10 ) << record.getQwantity();
    output << setw(7) << fixed << showpoint << setprecision( 2 ) << record.getPrice() << endl;
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
    outFile << "Number" << ' ' << "Tool's name" << ' ' << "Qwantity"  << ' ' << "Price" << endl ;
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
        char tName[30]; int tQuantity; double tPrice;
        record.setNumber( toolNumber );
        cout << "Input tool's name: ";
        cin >> tName;
        cout << "\nInput price, qwantity: ";
        cin >> setw( 10 ) >> tPrice; cin >> setw( 10 ) >> tQuantity;
        cout << tName << ' ' << tPrice << ' ' << tQuantity << endl;
        record.setName( tName ); record.setPrice( tPrice ); 
        record.setQwantity( tQuantity);
        cout << tName << "'s qwantity is: " << record.getQwantity() << endl;
        createNewRecord.seekp(( toolNumber - 1 ) * sizeof( ToolStore ) );
        createNewRecord.write( reinterpret_cast<const char *>(&record), sizeof(ToolStore) );
    }
    
}