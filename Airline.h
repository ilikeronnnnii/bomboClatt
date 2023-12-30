#ifndef AIRLINE_H
#define AIRLINE_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Airline
{
private:
    string AirplaneID;
    string Capacity;
    string Company;

public:
    Airline *next;
    Airline(string AirplaneID, string Capacity, string Company)
        : AirplaneID(AirplaneID), Capacity(Capacity), Company(Company) {}

    string getAirplaneID()
    {
        return AirplaneID;
    }
    string getCapacity()
    {
        return Capacity;
    }

    string getCompany()
    {
        return Company;
    }

    void display()
    {
        cout << setw(32) << "AirplaneID: " << AirplaneID << endl;
        cout << setw(40) << "Plane Max Capacity: " << Capacity << endl;
        cout << setw(33) << "Plane Brand: " << Company << endl;
    }
};

#endif