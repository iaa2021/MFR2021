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
    Customer customerRecord = { "John", "Smith", 123456 };
    Customer *customerPtr = &customerRecord;
    customerRecord.personal.phonenumber = "123-456-789";
    customerRecord.personal.address = "Main street, 11";
    customerRecord.personal.city = "New York";
    customerRecord.personal.state = "USA";
    customerRecord.personal.zipCode = "987456213";
    cout << customerRecord.firstName << "  " << customerRecord.lastName << "  " << customerRecord.customerNumber << endl;
    cout << customerRecord.personal.phonenumber << "  " << customerRecord.personal.address << "   " << customerRecord.personal.city << endl;
    cout << customerPtr -> firstName << "  " << customerPtr ->lastName << endl;
    return 0;
}