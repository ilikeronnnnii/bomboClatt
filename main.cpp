#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iomanip>

#include "SearchFunctions.h"
#include "SortingFunctions.h"
#include "User.h"
#include "Reservation.h"
#include "Airline.h"
#include "Init.h"
#include "LinkedList.h"
#include "dataFunctions.h"

using namespace std;

void LoadFiles(vector<User> &users, vector<Airline> &airline, vector<Reservation> &reservation)
{

    users.clear();
    airline.clear();
    reservation.clear();

    ifstream userFile("data/user.csv");
    string lineUser;

    getline(userFile, lineUser); // skip the headings

    while (getline(userFile, lineUser))
    {
        string name, ic, phone, email;
        stringstream ss(lineUser); // get the whole line
        getline(ss, name, ',');
        getline(ss, ic, ',');
        getline(ss, phone, ',');
        getline(ss, email, ',');

        users.push_back(User(name, ic, phone, email));
    }

    userFile.close();

    ifstream airlineFile("data/airline.csv");
    string lineAirline;

    getline(airlineFile, lineAirline); // skip the headings

    while (getline(airlineFile, lineAirline))
    {
        string airplaneId, capacity, company;
        stringstream ss(lineAirline); // get the whole line
        getline(ss, airplaneId, ',');
        getline(ss, capacity, ',');
        getline(ss, company, ',');

        airline.push_back(Airline(airplaneId, capacity, company));
    }
    airlineFile.close();

    ifstream reservationFile("data/reservation.csv");
    string lineReservation;

    getline(reservationFile, lineReservation); // skip the headings

    while (getline(reservationFile, lineReservation))
    {
        string reservationId, departureTime, arrivalTime, date, location, Class;
        stringstream ss(lineReservation); // get the whole line
        getline(ss, reservationId, ',');
        getline(ss, departureTime, ',');
        getline(ss, arrivalTime, ',');
        getline(ss, date, ',');
        getline(ss, location, ',');
        getline(ss, Class, ',');

        reservation.push_back(Reservation(reservationId, departureTime, arrivalTime, date, location, Class));
    }
    reservationFile.close();
};

int main()
{

    vector<User> users;
    vector<Airline> airlines;
    vector<Reservation> reservations;

    LoadFiles(users, airlines, reservations);
    reservationList reservationList;
    AirLineList airlineList;

    for (int i = 0; i < reservations.size(); i++)
    {
        reservationList.insertNode(reservations[i].getReservationID(), reservations[i].getDepartureTime(), reservations[i].getArrivalTime(), reservations[i].getDate(), reservations[i].getLocation(), reservations[i].getClass());
    }

    for (int i = 0; i < airlines.size(); i++)
    {
        airlineList.insertNode(airlines[i].getAirplaneID(), airlines[i].getCapacity(), airlines[i].getCompany());
    }

    reservationList.updateCSV("1", "2", "33", "$", "%", "23123");
    airlineList.updateAirplaneCSV("1", "2", "#");
    LoadFiles(users, airlines, reservations);

    airlineList.displayAirplaneList();
    reservationList.displayList();
}