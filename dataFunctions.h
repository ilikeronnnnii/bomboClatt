#ifndef DATAFUNCTIONS_H
#define DATAFUNCTIONS_H

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

void NewData(string res, string dept, string arr, string dat, string loc, string cla);
void NewDataAirline(string AirplaneID, string Capacity, string Company);
void deleteDataAirline(string AirID);
void deleteData(string res);

#endif