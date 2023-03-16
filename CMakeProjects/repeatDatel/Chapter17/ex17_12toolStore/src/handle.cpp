#include "ToolStore.h"
#include "config.h"
void createTextFile( fstream & );
void makeNewRecord( fstream & );
void updateRecord( fstream & );
void deleteRecord( fstream & );
void outputLine( ostream &, const ToolStore & );
void outputFileOnDisplay( fstream & );
#include <string>
using std::string;
int main()
{
    cout << "Project version is " << (PROJECT_VERSION_MAJOR) << '.';
    cout << (PROJECT_VERSION_MINOR) << '.' << (PROJECT_VERSION_PATCH) << endl;
    ToolStore::printVersion();
    fstream inOutStore( "store.txt", ios::in|ios::out|ios::binary );
    if( !inOutStore )
    {
        cerr << "File cannot be opened by inOutStore.\n";
        exit( 1 );
    }
    int choice;
    cout << "Input your choice:\n";
    cout << "1 - create text file;\n2 - make new record;\n";
    cout << "3 - update record;\n4 - delete record;\n";
    cout << "5 - display store's content.\n";
    cin >> choice;
    while ( choice > 0 && choice <= 5 )
    {
        switch ( choice )
        {
            case 1:
            createTextFile( inOutStore );
            break;
            case 2:
            makeNewRecord( inOutStore );
            break;
            case 3:
            updateRecord( inOutStore );
            break;
            case 4:
            deleteRecord( inOutStore );
            break;
            case 5:
            outputFileOnDisplay( inOutStore );
            break;
            default:
            cout << "\nYou've entered wrong choice.\n";
            break;
        }
        inOutStore.clear();
        cout << "Input your choice:\n";
        cout << "1 - create text file;\n2 - make new record;\n";
        cout << "3 - update record;\n4 - delete record;\n";
        cout << "5 - display store's content.\n";
        cin >> choice;
    }
    inOutStore.clear();
    inOutStore.close();
    return 0;
}
void outputLine( ostream &output, const ToolStore &record )
{
    output << setw(5) << left << record.getNumber();
    output << setw( 20 ) << left << record.getName();
    output << left << setw( 10 ) << record.getQwantity();
    output << setw(7) << showpoint << fixed << setprecision( 2 ) << record.getPrice() << endl;
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
    createNewRecord.clear();
}
void updateRecord( fstream &updateFile )
{
    int accNumber; ToolStore record;
    cout << "Input account number > 0 & <= 100, you'd like to update,:\n";
    cin >> accNumber;
    if( accNumber < 0 && accNumber > 100 )
    cout << "You've entered wrong number.\n";

    updateFile.seekg( ( accNumber - 1 ) * sizeof( ToolStore ) );
    updateFile.read( reinterpret_cast< char * >( &record ), sizeof( ToolStore ) );
    if( record.getNumber() == 0 )
    cout << "Such record doesn't exist.\n";
    else
    {
        cout << "Record is:\n";
        outputLine( cout, record );
        int choice;
        cout << "Input your choice, 1 - if you'd like to change price, ";
        cout << "2 - if you'd like to change qwantity:\n";
        cin >> choice;
        switch ( choice )
        {
        case 1:
            { double newPrice; cout << "Input new price:\n? ";
                cin >> newPrice;
                record.setPrice( newPrice );
            }
            break;
        case 2:
            { double qw, oldQw; cout << "Input add's volume +, sell's volume -:\n? ";
                cin >> qw;
                oldQw = record.getQwantity();
                record.setQwantity( qw + oldQw );
            }
            break;
        default:
            cout << "You've entered wrong choice.\n";
            break;
        }
        updateFile.seekp( ( accNumber - 1 ) * sizeof( ToolStore ) );
        updateFile.write( reinterpret_cast<const char *>(&record), sizeof(ToolStore) );
    }
    cout << "Account after updating is:\n";
    outputLine( cout, record );
    updateFile.clear();
}
void deleteRecord( fstream &deleteFile )
{
    int accNumber; ToolStore record;
    cout << "Input account number, you'd like to delete:\n";
    cin >> accNumber;
    deleteFile.seekg( ( accNumber - 1 ) * sizeof( ToolStore ) );
    deleteFile.read( reinterpret_cast<char *>(&record), sizeof( ToolStore ) );
    if( record.getNumber() == 0 )
    cout << "Account " << accNumber << " doesn't exist.\n";
    else
    {
        cout << "Record is:\n";
        outputLine( cout, record );
        ToolStore blank;
        deleteFile.seekp( ( accNumber - 1 ) * sizeof( ToolStore ) );
        deleteFile.write( reinterpret_cast<const char *>(&blank), sizeof(ToolStore) );
        cout << "Account " << accNumber << " was deleted.\n";
    }
}
void outputFileOnDisplay( fstream &onFile )
{
    ToolStore record;
    onFile.seekg( 0 );
    onFile.read( reinterpret_cast<char *>(&record), sizeof(ToolStore) );
    cout << "\nNumber" << ' ' << "Tool's name" << ' ' << "Qwantity"  << ' ' << "Price" << endl ;
    while ( !onFile.eof() )
    {
        if ( record.getNumber() != 0 )
        {
            outputLine( cout, record );
        }
        onFile.read( reinterpret_cast<char *>(&record), sizeof(ToolStore) );
    }
}