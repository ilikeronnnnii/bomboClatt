#include <vector>
#include "SearchFunctions.h"

int binarySearchByName(const vector<User> &users, const string &name)
{
    int low = 0;
    int high = users.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (users[mid].getName() == name)
        {
            return mid; // User found at index mid
        }
        else if (users[mid].getName() < name)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1; // User not found
}

int binarySearchByIC(const vector<User> &users, const string &IC)
{
    int low = 0;
    int high = users.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (users[mid].getIC() == IC)
        {
            return mid; // User found at index mid
        }
        else if (users[mid].getIC() < IC)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1; // User not found
}

int binarySearchByPhone(const vector<User> &users, const string &Phone)
{
    int low = 0;
    int high = users.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (users[mid].getPhone() == Phone)
        {
            return mid; // User found at index mid
        }
        else if (users[mid].getPhone() < Phone)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1; // User not found
}

int binarySearchByEmail(const vector<User> &users, const string &Email)
{
    int low = 0;
    int high = users.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (users[mid].getEmail() == Email)
        {
            return mid; // User found at index mid
        }
        else if (users[mid].getEmail() < Email)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1; // User not found
}

int binarySearchByAirplaneID(vector<Airline> &airlines, const string &AirplaneID)
{
    int low = 0;
    int high = airlines.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (airlines[mid].getAirplaneID() == AirplaneID)
        {
            return mid; // User found at index mid
        }
        else if (airlines[mid].getAirplaneID() < AirplaneID)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1; // User not found
}

int binarySearchByCapacity(vector<Airline> &airlines, const string &Capacity)
{
    int low = 0;
    int high = airlines.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (airlines[mid].getCapacity() == Capacity)
        {
            return mid; // User found at index mid
        }
        else if (airlines[mid].getCapacity() < Capacity)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1; // User not found
}

int binarySearchByCompany(vector<Airline> &airlines, const string &Company)
{
    int low = 0;
    int high = airlines.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (airlines[mid].getCompany() == Company)
        {
            return mid; // User found at index mid
        }
        else if (airlines[mid].getCompany() < Company)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1; // User not found
}

int binarySearchByReservationID(vector<Reservation> &reservations, const string &ReservationID)
{
    int low = 0;
    int high = reservations.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (reservations[mid].getReservationID() == ReservationID)
        {
            return mid; // User found at index mid
        }
        else if (reservations[mid].getReservationID() < ReservationID)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1; // User not found
}

int binarySearchByDepartureTime(vector<Reservation> &reservations, const string &DepartureTime)
{
    int low = 0;
    int high = reservations.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (reservations[mid].getDepartureTime() == DepartureTime)
        {
            return mid; // User found at index mid
        }
        else if (reservations[mid].getDepartureTime() < DepartureTime)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1; // User not found
}

int binarySearchByArrivalTime(vector<Reservation> &reservations, const string &ArrivalTime)
{
    int low = 0;
    int high = reservations.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (reservations[mid].getArrivalTime() == ArrivalTime)
        {
            return mid; // User found at index mid
        }
        else if (reservations[mid].getArrivalTime() < ArrivalTime)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1; // User not found
}

int binarySearchByDate(vector<Reservation> &reservations, const string &Date)
{
    int low = 0;
    int high = reservations.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (reservations[mid].getDate() == Date)
        {
            return mid; // User found at index mid
        }
        else if (reservations[mid].getDate() < Date)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1; // User not found
}

int binarySearchByLocation(vector<Reservation> &reservations, const string &Location)
{
    int low = 0;
    int high = reservations.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (reservations[mid].getLocation() == Location)
        {
            return mid; // User found at index mid
        }
        else if (reservations[mid].getLocation() < Location)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1; // User not found
}