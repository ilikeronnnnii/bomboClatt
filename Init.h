
#ifndef INIT_H
#define INIT_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Init
{
public:
    void
    displayMenu()
    {
        // system("cls");     // to clear the mess
        cout << "\033[1m"; // Start bold text
        cout << endl;
        cout << "                                   |" << endl;
        cout << "                                   |" << endl;
        cout << "                                   |" << endl;
        cout << "                                 .-'-." << endl;
        cout << "                                ' ___ '" << endl;
        cout << "                      ---------'  .-.  '---------" << endl;
        cout << "      _________________________'  '-'  '_________________________" << endl;
        cout << "      ''''''-|---|--/    \\==][^',_m_,'^][==/    \\--|---|-'''''' " << endl;
        cout << "                    \\    /  ||/   H   \\||  \\    /" << endl;
        cout << "                     '--'   OO   O|O   OO     '--'" << endl;
        cout << endl;

        cout << setw(55) << "_________________________________________________________________" << endl;
        cout << setw(56) << "|      Airline Reservation System                                |" << endl;
        cout << setw(56) << "|      [1] Reservation Dashboard (Sorting/Searching Function)    |" << endl;
        cout << setw(56) << "|      [2] Reservation Management (Linked List Implementation)   |" << endl;
        cout << setw(56) << "|      [3] Exit                                                  |" << endl;
        cout << setw(56) << "|________________________________________________________________|" << endl;
        cout << endl;
        cout << setw(37) << "Option: ";
    }

    void displayReservationManagement()
    {
        cout << setw(55) << "_____________________________________" << endl;
        cout << setw(56) << "|      Reservation Management         |" << endl;
        cout << setw(56) << "|      [1] Manage User                |" << endl;
        cout << setw(56) << "|      [2] Manage Airline             |" << endl;
        cout << setw(56) << "|      [3] Manage Reservation         |" << endl;
        cout << setw(56) << "|      [4] Exit                       |" << endl;
        cout << setw(56) << "|_____________________________________|" << endl;
    }
    void displayReservationDashboard()
    {
        cout << setw(55) << "_____________________________________" << endl;
        cout << setw(56) << "|      Reservation Dashboard          |" << endl;
        cout << setw(56) << "|      [1] Display User               |" << endl;
        cout << setw(56) << "|      [2] Display Airline            |" << endl;
        cout << setw(56) << "|      [3] Display Reservation        |" << endl;
        cout << setw(56) << "|      [4] Exit                       |" << endl;
        cout << setw(56) << "|_____________________________________|" << endl;
    }

    void displaySelection()
    {
        cout << setw(55) << "_____________________________________" << endl;
        cout << setw(56) << "|      Choose Option                  |" << endl;
        cout << setw(56) << "|      [1] Sort Data                  |" << endl;
        cout << setw(56) << "|      [2] Search Data                |" << endl;
        cout << setw(56) << "|_____________________________________|" << endl;
        cout << endl;
        cout << setw(37) << "Option: ";
    }

    void displaySortingUser()
    {
        cout << setw(55) << "_____________________________________" << endl;
        cout << setw(56) << "|      Sorting User                   |" << endl;
        cout << setw(56) << "|      [1] By Name                    |" << endl;
        cout << setw(56) << "|      [2] By IC                      |" << endl;
        cout << setw(56) << "|      [3] By Phone                   |" << endl;
        cout << setw(56) << "|      [4] By Email                   |" << endl;
        cout << setw(56) << "|_____________________________________|" << endl;
        cout << endl;
        cout << setw(37) << "Option: ";
    }

    void displaySortingAirline()
    {
        cout << setw(55) << "_____________________________________" << endl;
        cout << setw(56) << "|      Sorting Airline                |" << endl;
        cout << setw(56) << "|      [1] By AirplaneID              |" << endl;
        cout << setw(56) << "|      [2] By Capacity                |" << endl;
        cout << setw(56) << "|      [3] By Company                 |" << endl;
        cout << setw(56) << "|_____________________________________|" << endl;
        cout << endl;
        cout << setw(37) << "Option: ";
    }

    void displaySortingReservation()
    {
        cout << setw(55) << "_____________________________________" << endl;
        cout << setw(56) << "|      Sorting Reservation            |" << endl;
        cout << setw(56) << "|      [1] By ReservationID           |" << endl;
        cout << setw(56) << "|      [2] By DepartureTime           |" << endl;
        cout << setw(56) << "|      [3] By ArrivalTime             |" << endl;
        cout << setw(56) << "|      [4] By Date                    |" << endl;
        cout << setw(56) << "|      [5] By Location                |" << endl;
        cout << setw(56) << "|_____________________________________|" << endl;
        cout << endl;
        cout << setw(37) << "Option: ";
    }

    void displaySeachingUser()
    {
        cout << setw(55) << "_____________________________________" << endl;
        cout << setw(56) << "|      Searching User                 |" << endl;
        cout << setw(56) << "|      [1] By Name                    |" << endl;
        cout << setw(56) << "|      [2] By IC                      |" << endl;
        cout << setw(56) << "|      [3] By Phone                   |" << endl;
        cout << setw(56) << "|      [4] By Email                   |" << endl;
        cout << setw(56) << "|_____________________________________|" << endl;
        cout << endl;
        cout << setw(37) << "Option: ";
    }

    void displaySeachingAirline()
    {
        cout << setw(55) << "_____________________________________" << endl;
        cout << setw(56) << "|      Searching Airline              |" << endl;
        cout << setw(56) << "|      [1] By AirplaneID              |" << endl;
        cout << setw(56) << "|      [2] By Capacity                |" << endl;
        cout << setw(56) << "|      [3] By Company                 |" << endl;
        cout << setw(56) << "|_____________________________________|" << endl;
        cout << endl;
        cout << setw(37) << "Option: ";
    }

    void displaySeachingReservation()
    {
        cout << setw(55) << "_____________________________________" << endl;
        cout << setw(56) << "|      Searching Reservation          |" << endl;
        cout << setw(56) << "|      [1] By ReservationID           |" << endl;
        cout << setw(56) << "|      [2] By DepartureTime           |" << endl;
        cout << setw(56) << "|      [3] By ArrivalTime             |" << endl;
        cout << setw(56) << "|      [4] By Date                    |" << endl;
        cout << setw(56) << "|      [5] By Location                |" << endl;
        cout << setw(56) << "|_____________________________________|" << endl;
        cout << endl;
        cout << setw(37) << "Option: ";
    }

    void reservationInput()
    {
        cout << setw(45) << "Set the user destination?:  " << endl
             << endl;
        cout << setw(45) << "[1] Chicago to Miami" << endl;
        cout << setw(45) << "[2] Seattle to Denver" << endl;
        cout << setw(45) << "[3] San Francisco to Houston" << endl;
        cout << setw(45) << "[4] Atlanta to Las Vegas" << endl;
        cout << setw(45) << "[5] Boston to Orlando" << endl;
        cout << setw(45) << "[6] New York to Los Angeles" << endl;

        int choice;

        string departureTime, arrivalTime, date, flightClass;
        cout << "Selection: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            departureTime = "08:00 AM";
            arrivalTime = "10:30 AM";
            date = "2023-04-15";
            break;
        case 2:
            departureTime = "12:45 PM";
            arrivalTime = "03:15 PM";
            date = "2023-05-22";
            break;
        case 3:
            departureTime = "04:30 PM";
            arrivalTime = "06:45 PM";
            date = "2023-06-10";
            break;
        case 4:
            departureTime = "09:15 AM";
            arrivalTime = "11:45 AM";
            date = "2023-07-03";
            break;
        case 5:
            departureTime = "02:30 PM";
            arrivalTime = "05:00 PM";
            date = "2023-08-18";
            break;
        case 6:
            departureTime = "06:20 PM";
            arrivalTime = "08:40 PM";
            date = "2023-09-05";
            break;
        default:
            cout << "Invalid choice. Exiting program." << endl;
        }

        cout << "Select your class:" << endl;
        cout << "[1] Economy" << endl;
        cout << "[2] Business" << endl;
        cout << "[3] First Class" << endl;
        cout << "Enter your choice (1-3): ";
        int classChoice;
        cin >> classChoice;

        switch (classChoice)
        {
        case 1:
            flightClass = "Economy";
            break;
        case 2:
            flightClass = "Business";
            break;
        case 3:
            flightClass = "First Class";
            break;
        default:
            cout << "Invalid class choice. Exiting program." << endl;
        }
    }

    void manageData()
    {
        cout << "Operations" << endl;
        cout << "[1] Adding Data" << endl;
        cout << "[2] Delete Data" << endl;
        cout << "[3] Find Data" << endl;
        cout << "[4] Display All Data" << endl;
    }

    void addData()
    {
        // insert first node
        // insert last node
        // insert somewhere middle (give position [i])
    }

    void deleteData()
    {
        // delete first node
        // delete last node
        // delete somewhere middle (give position [i])
    }
};

#endif