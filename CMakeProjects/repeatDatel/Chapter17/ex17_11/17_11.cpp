#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::showpoint;
using std::fixed;
using std::cerr;
using std::right;
using std::left;
#include <fstream>
using std::ofstream;
using std::ifstream;
using std::fstream;
#include <cstdlib>
using std::exit;
#include <iomanip>
using std::setw;
using std::setprecision;
#include <string>
using std::string;
#include <cstring>
using std::strncpy;
struct Object
{
    public:
    Object( string = "", string = "unassigned", string ="" );
    void setLastName( string ); 
    string getLastName() const;  
    void setFirstName( string ); 
    string getFirstName() const;  
    void setAge( string ); 
    string getAge() const; 

    private:
    char lastName[ 15 ]; 
    char firstName[ 15 ]; 
    char age[ 4 ]; 

};

int main()
{
    Object object;
    ofstream onObject( "manage.txt", ios::binary );
    if( !onObject )
    {
        cerr << "File cannot be opened by onObject.\n";
        exit( 1 );
    }
    for (int i = 0; i < 100; i++)
    {
        onObject.write( reinterpret_cast<const char *>(&object), sizeof( Object ) );
    }
    onObject.close();
    ofstream outObject( "manage.txt", ios::out|ios::binary );
    cout << "\nFile manage.txt was created.\n";
    cout << "Input 10 first and last names and ages of these people.\n";
    string fN, lN, aG; int a = -1;
    for (size_t i = 0; i < 10; i++)
    {
        cin >> setw( 16 ) >> fN >> setw( 16 ) >> setw( 5 ) >> lN >> aG;
        object.setFirstName( fN ); object.setLastName( lN ); object.setAge( aG );
        outObject.seekp( a++ );
        outObject.write( reinterpret_cast<const char *>(&object), sizeof( Object ) );
    }
    outObject.clear(); outObject.close();
    cout << "\nFile consist of:\n";
    ifstream inObject( "manage.txt", ios::in );
    inObject.seekg( 0 );
    inObject.read( reinterpret_cast<char *>(&object), sizeof( Object ) );
    while (!inObject.eof() )
    {
        if( object.getLastName() != "unassigned" )
        {
            cout << setw( 16 ) << object.getFirstName();
            cout << setw( 16 ) << object.getLastName();
            cout << setw( 5 ) << object.getAge() << endl; 
        }
        inObject.read( reinterpret_cast<char *>(&object), sizeof( Object ) );
    }
    return 0;
}
Object::Object( string fN, string lN, string ag )
{
    setAge( ag ); setFirstName( fN ); setLastName( lN );
}
string Object::getFirstName() const
{
    return firstName;
}
string Object::getLastName() const
{
    return lastName;
}
string Object::getAge() const
{
    return age;
}
void Object::setLastName( string lNstring )
{
    const char *lN = lNstring.data();
    int length = lNstring.size();
    length = ( length < 15 ? length : 14 );
    strncpy( lastName, lN, length );
    lastName[ length ] = '\0';
}
void Object::setFirstName( string fNstring )
{
    const char *fN = fNstring.data();
    int length = fNstring.size();
    length = ( length < 15 ? length : 14 );
    strncpy( firstName, fN, length );
    firstName[ length ] = '\0';
}
void Object::setAge( string aGstring )
{
    const char *aG = aGstring.data();
    int length = aGstring.size();
    length = ( length < 15 ? length : 14 );
    strncpy( age, aG, length );
    age[ length ] = '\0';
}