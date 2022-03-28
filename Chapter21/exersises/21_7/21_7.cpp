#include <iostream>
using std::cout;
using std::cin;
using std::endl;
struct Customer
{
    char lastName[ 15 ];
    char firstName[ 15 ];
    int customerNumber;

    struct
    {
        char* phonenumber;
        char* address;
        char* city;
        char* state;
        char* zipCode;
    } personal;
} customerRecord, *customerPtr;

int main()
{
    Customer c1 = { "John", "Smith", 123456 };
    c1.personal.phonenumber = "123-456-789";
    c1.personal.address = "Main street, 11";
    c1.personal.city = "New York";
    c1.personal.state = "USA";
    c1.personal.zipCode = "987456213";
    cout << c1.firstName << "  " << c1.lastName << "  " << c1.customerNumber << endl;
    cout << c1.personal.phonenumber << "  " << c1.personal.address << "   " << c1.personal.city << endl;
    cout << customerRecord.firstName << endl;
    return 0;
}