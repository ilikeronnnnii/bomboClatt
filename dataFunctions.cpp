#include "dataFunctions.h"

void NewDataAirline(string AirplaneID, string Capacity, string Company)
{

    ofstream airlineFile("data/airline.csv", ios::app);
    airlineFile.seekp(0, ios::end);
    airlineFile << "\n"
                << AirplaneID << "," << Capacity << "," << Company;

    airlineFile.seekp(0, ios::end);
    airlineFile.close();
};

void deleteDataAirline(string AirID)
{
    ifstream inputFile("data/airplane.csv");
    ofstream tempFile("data/temp.csv");

    string line;
    getline(inputFile, line); // Read and write the header

    tempFile << line << endl; // Write the header to the temporary file

    while (getline(inputFile, line))
    {
        stringstream ss(line);
        string AirplaneID, Capacity, Company;

        getline(ss, AirplaneID, ',');
        getline(ss, Capacity, ',');
        getline(ss, Company, ',');

        // Check if the current line matches the reservation to be deleted
        if (AirID != AirplaneID)
        {
            // Write the line to the temporary file
            tempFile << line << endl;
        }
    }

    inputFile.close();
    tempFile.close();

    // Remove the original file and rename the temporary file
    remove("data/airline.csv");
    rename("temp.csv", "data/airline.csv");
}

void NewData(string res, string dept, string arr, string dat, string loc, string cla)
{

    ofstream reservationFile("data/reservation.csv", ios::app);
    reservationFile.seekp(0, ios::end);
    reservationFile << "\n"
                    << res << "," << dept << "," << arr << "," << dat << "," << loc << "," << cla;

    reservationFile.seekp(0, ios::end);
    reservationFile.close();
};

void deleteData(string res)
{
    ifstream inputFile("data/reservation.csv");
    ofstream tempFile("temp.csv");

    string line;
    getline(inputFile, line); // Read and write the header

    tempFile << line << endl; // Write the header to the temporary file

    while (getline(inputFile, line))
    {
        stringstream ss(line);
        string reservationId, departureTime, arrivalTime, date, location, Class;

        getline(ss, reservationId, ',');
        getline(ss, departureTime, ',');
        getline(ss, arrivalTime, ',');
        getline(ss, date, ',');
        getline(ss, location, ',');
        getline(ss, Class, ',');

        // Check if the current line matches the reservation to be deleted
        if (reservationId != res)
        {
            // Write the line to the temporary file
            tempFile << line << endl;
        }
    }

    inputFile.close();
    tempFile.close();

    // Remove the original file and rename the temporary file
    remove("data/reservation.csv");
    rename("temp.csv", "data/reservation.csv");
}