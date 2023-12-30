#ifndef SORTING_FUNCTIONS_H
#define SORTING_FUNCTIONS_H

#include "User.h"
#include "Reservation.h"
#include "Airline.h"
#include <vector>

int partitionUsers(vector<User> &users, int bottom, int top, int choice);
void quickSortUsers(vector<User> &users, int bottom, int top, int choice);
int partitionAirline(vector<Airline> &airlines, int bottom, int top, int choice);
void quickSortAirline(vector<Airline> &airlines, int bottom, int top, int choice);
int partitionReservation(vector<Reservation> &reservations, int bottom, int top, int choice);
void quickSortReservation(vector<Reservation> &reservations, int bottom, int top, int choice);
#endif