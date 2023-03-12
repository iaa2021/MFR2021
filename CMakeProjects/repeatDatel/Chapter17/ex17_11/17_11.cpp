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
    Object( string = "", string = "", string ="" );
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

}
string Object::getFirstName() const
{
    
}