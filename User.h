#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class User
{
private:
    string Name;
    string IC;
    string Phone;
    string Email;

public:
    User(string Name, string IC, string Phone, string Email)
        : Name(Name), IC(IC), Phone(Phone), Email(Email) {}

    string getName() const
    {
        return Name;
    }
    string getIC() const
    {
        return IC;
    }
    string getPhone() const
    {
        return Phone;
    }
    string getEmail() const
    {
        return Email;
    }

    void display() const
    {
        cout << setw(25) << "Name: " << Name << endl;
        cout << setw(42) << "Identification Number: " << IC << endl;
        cout << setw(33) << "Phone Number: " << Phone << endl;
        cout << setw(26) << "Email: " << Email << endl;
    }
};

#endif