#include <iostream>

#include <memory>
using namespace std;
struct Smaptphone
{
    string name;
    int stSpace;
    string colour;
    float price;
};
struct Person
{
    string name;
    int age;
    string gender;
    Smaptphone smartphone;
};

void printSmartphoneInfo( Smaptphone &s )
{
    cout << "\nname: " << s.name << "\nstorage space: " << s.stSpace;
    cout << "\ncolour: " << s.colour << "\nprice: " << s.price << endl; 
}
void printPersonInfo( Person &p )
{
    cout << "\nname: " << p.name << "\nage: " << p.age;
    cout << "\ngender: " << p.gender  << endl;
    printSmartphoneInfo( p.smartphone );
}
int main()
{
    Smaptphone smartphone;
    smartphone.name = "iPhone 12";
    smartphone.stSpace = 32;
    smartphone.colour = "black";
    smartphone.price = 999.99;

    Smaptphone smartphone1;
    smartphone1.name = "Samsung Galaxy S21 Ultra";
    smartphone1.stSpace = 64;
    smartphone1.colour = "gray";
    smartphone1.price = 888.88;
    
    Person p;
    p.name = "Andrey";
    p.age = 55;
    p.gender = "mail";
    p.smartphone = smartphone;
    printPersonInfo( p );
    cin.get();
    return 0;
}