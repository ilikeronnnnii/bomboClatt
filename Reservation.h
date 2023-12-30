#ifndef RESERVATION_H
#define RESERVATION_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Reservation
{
private:
    string ReservationID;
    string DepartureTime;
    string ArrivalTime;
    string Date;
    string Location;
    string Class;

public:
    Reservation *next;
    Reservation(string ReservationID, string DepartureTime, string ArrivalTime, string Date, string Location, string Class)
        : ReservationID(ReservationID), DepartureTime(DepartureTime), ArrivalTime(ArrivalTime), Date(Date), Location(Location), Class(Class) {}

    string getReservationID()
    {
        return ReservationID;
    }
    string getDepartureTime()
    {
        return DepartureTime;
    }
    string getArrivalTime()
    {
        return ArrivalTime;
    }
    string getDate()
    {
        return Date;
    }
    string getLocation()
    {
        return Location;
    }
    string getClass()
    {
        return Class;
    }

    void display()
    {
        cout << setw(34) << "ReservationID: " << ReservationID << endl;
        cout << setw(45) << "Estimated Departure Time: " << DepartureTime << endl;
        cout << setw(43) << "Estimated Arrival Time: " << ArrivalTime << endl;
        cout << setw(37) << "Reservation Date: " << Date << endl;
        cout << setw(40) << "Arrival Destination: " << Location << endl;
        cout << setw(26) << "Class: " << Class << endl;
    }
};

#endif