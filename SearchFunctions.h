#ifndef SEARCH_FUNCTIONS_H
#define SEARCH_FUNCTIONS_H

#include "User.h"
#include "Reservation.h"
#include "Airline.h"
#include "vector"

int binarySearchByCapacity(vector<Airline> &airlines, const string &Capacity);
int binarySearchByName(const vector<User> &users, const string &name);
int binarySearchByIC(const vector<User> &users, const string &IC);
int binarySearchByPhone(const vector<User> &users, const string &Phone);
int binarySearchByEmail(const vector<User> &users, const string &Email);
int binarySearchByAirplaneID(vector<Airline> &airlines, const string &AirplaneID);
int binarySearchByCompany(vector<Airline> &airlines, const string &Company);
int binarySearchByReservationID(vector<Reservation> &reservations, const string &ReservationID);
int binarySearchByDepartureTime(vector<Reservation> &reservations, const string &DepartureTime);
int binarySearchByArrivalTime(vector<Reservation> &reservations, const string &ArrivalTime);
int binarySearchByDate(vector<Reservation> &reservations, const string &Date);
int binarySearchByLocation(vector<Reservation> &reservations, const string &Location);

#endif