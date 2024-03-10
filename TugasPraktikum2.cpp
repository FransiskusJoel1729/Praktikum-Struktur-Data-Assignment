#include <iostream>
using namespace std;

// Struct
struct PersonStruct
{
    string name;
    string gender;
    int age;
};

// Class
class PersonClass
{
public:
    string name;
    string gender;
    int age;

    void display()
    {
        cout << " Name   : " << name << endl;
        cout << " Gender : " << gender << endl;
        cout << " Age    : " << age << endl;
    }
};

int main()
{
    // Struct
    PersonStruct personStruct;
    personStruct.name = "Jennifer";
    personStruct.gender = "Female";
    personStruct.age = 27;
    cout << " Struct - Name   : " << personStruct.name << endl;
    cout << " Struct - Gender : " << personStruct.gender << endl;
    cout << " Struct - Age    : " << personStruct.age << endl;

    // Class
    PersonClass personClass;
    personClass.name = "George";
    personClass.gender = "Male";
    personClass.age = 29;
    personClass.display();

    return 0;
}