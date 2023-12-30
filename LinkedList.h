#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Reservation.h"
#include "Airline.h"
#include "dataFunctions.h"

using namespace std;

class reservationList // List
{
private:
    Reservation *head;

public:
    reservationList() : head(nullptr) {}

    bool isEmpty()
    {
        return head == nullptr;
    }
    Reservation *getHead() const
    {
        return head;
    }

    Reservation *insertNode(string res, string dept, string arr, string dat, string loc, string cla)
    {
        int currIndex = 0;
        Reservation *curr = head;
        Reservation *prev = nullptr;

        while (curr != nullptr && (res > curr->getReservationID() || (res == curr->getReservationID() && dept > curr->getDepartureTime()) || (res == curr->getReservationID() && dept == curr->getDepartureTime() && arr > curr->getArrivalTime()) || (res == curr->getReservationID() && dept == curr->getDepartureTime() && arr > curr->getArrivalTime() && dat > curr->getDate()) || (res == curr->getReservationID() && dept == curr->getDepartureTime() && arr > curr->getArrivalTime() && dat > curr->getDate() && loc > curr->getLocation()) || (res == curr->getReservationID() && dept == curr->getDepartureTime() && arr > curr->getArrivalTime() && dat > curr->getDate() && loc > curr->getLocation() && cla > curr->getClass())))
        {
            prev = curr;
            curr = curr->next;
            currIndex++;
        }

        Reservation *newNode = new Reservation(res, dept, arr, dat, loc, cla);

        if (currIndex == 0)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            newNode->next = prev->next;
            prev->next = newNode;
        }
        return newNode;
    }

    int deleteNodeReservation(string res)
    {
        Reservation *prev = nullptr;
        Reservation *curr = head;
        int currentIndex = 1;

        while (curr != nullptr && (curr->getReservationID() != res))
        {
            prev = curr;
            curr = curr->next;
            currentIndex++;
        }

        if (curr != nullptr)
        {
            if (prev != nullptr)
            {
                prev->next = curr->next;
                delete curr;
            }
            else
            {
                head = curr->next;
                delete curr;
            }

            // Move this line here
            deleteData(res);

            return currentIndex;
        }
        else
        {
            return 0; // Node not found
        }
    }

    int findNode(string res, string dept, string arr, string dat, string loc, string cla)
    {
        int currentIndex = 1;
        Reservation *curr = head;

        while (curr != nullptr && (curr->getReservationID() != res || curr->getArrivalTime() != arr || curr->getClass() != cla || curr->getDate() != dat || curr->getDepartureTime() != dept || curr->getLocation() != loc))
        {
            curr = curr->next;
            currentIndex++;
        }

        if (curr != nullptr)
        {
            return currentIndex;
        }
        else
        {
            return 0;
        }
    }

    void displayList()
    {
        Reservation *current = head;
        while (current != nullptr)
        {
            cout << "ReservationID: " << current->getReservationID() << endl;
            cout << "Departure Time: " << current->getDepartureTime() << endl;
            cout << "Arrival Time: " << current->getArrivalTime() << endl;
            cout << "Reservation Date: " << current->getDate() << endl;
            cout << "Location: " << current->getLocation() << endl;
            cout << "Class: " << current->getClass() << endl
                 << endl;
            current = current->next;
        }
        cout << endl;
    }

    void updateCSV(string res, string dept, string arr, string dat, string loc, string cla)
    {
        int currIndex = 0;
        Reservation *curr = head;
        Reservation *prev = nullptr;

        while (curr != nullptr && (res > curr->getReservationID() || (res == curr->getReservationID() && dept > curr->getDepartureTime()) || (res == curr->getReservationID() && dept == curr->getDepartureTime() && arr > curr->getArrivalTime()) || (res == curr->getReservationID() && dept == curr->getDepartureTime() && arr > curr->getArrivalTime() && dat > curr->getDate()) || (res == curr->getReservationID() && dept == curr->getDepartureTime() && arr > curr->getArrivalTime() && dat > curr->getDate() && loc > curr->getLocation()) || (res == curr->getReservationID() && dept == curr->getDepartureTime() && arr > curr->getArrivalTime() && dat > curr->getDate() && loc > curr->getLocation() && cla > curr->getClass())))
        {
            prev = curr;
            curr = curr->next;
            currIndex++;
        }

        Reservation *newNode = new Reservation(res, dept, arr, dat, loc, cla);

        if (head == nullptr)
        {
            // If the list is empty, make the new node the head
            head = newNode;
        }
        else
        {
            Reservation *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }

        NewData(res, dept, arr, dat, loc, cla);
    }
};

class AirLineList // List
{
private:
    Airline *head;

public:
    AirLineList() : head(nullptr) {}

    bool isEmpty()
    {
        return head == nullptr;
    }
    Airline *getHead() const
    {
        return head;
    }

    Airline *insertNode(string AirplaneID, string Capacity, string Company)
    {
        int currIndex = 0;
        Airline *curr = head;
        Airline *prev = nullptr;

        while (curr != nullptr)
        {
            prev = curr;
            curr = curr->next;
            currIndex++;
        }

        Airline *newNode = new Airline(AirplaneID, Capacity, Company);

        if (currIndex == 0)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            newNode->next = prev->next;
            prev->next = newNode;
        }
        return newNode;
    }

    int deleteNodeAirline(string AirplaneID)
    {
        Airline *prev = nullptr;
        Airline *curr = head;
        int currentIndex = 1;

        while (curr != nullptr)
        {
            prev = curr;
            curr = curr->next;
            currentIndex++;
        }

        if (curr != nullptr)
        {
            if (prev != nullptr)
            {
                prev->next = curr->next;
                delete curr;
            }
            else
            {
                head = curr->next;
                delete curr;
            }

            // Move this line here
            deleteDataAirline(AirplaneID);

            return currentIndex;
        }
        else
        {
            return 0; // Node not found
        }
    }

    int findAirplaneNode(string AirplaneID, string Capacity, string Company)
    {
        int currentIndex = 1;
        Airline *curr = head;

        while (curr != nullptr && (curr->getAirplaneID() != AirplaneID || curr->getCapacity() != Capacity || curr->getCompany() != Company))
        {
            curr = curr->next;
            currentIndex++;
        }

        if (curr != nullptr)
        {
            return currentIndex;
        }
        else
        {
            return 0;
        }
    }

    void displayAirplaneList()
    {
        Airline *current = head;
        while (current != nullptr)
        {
            cout << "AirplaneID: " << current->getAirplaneID() << endl;
            cout << "Capacity : " << current->getCapacity() << endl;
            cout << "Company : " << current->getCompany() << endl;
            cout << endl;
            current = current->next;
        }
        cout << endl;
    }

    void updateAirplaneCSV(string AirplaneID, string Capacity, string Company)
    {
        int currIndex = 0;
        Airline *curr = head;
        Airline *prev = nullptr;

        Airline *newNode = new Airline(AirplaneID, Capacity, Company);

        if (head == nullptr)
        {
            // If the list is empty, make the new node the head
            head = newNode;
        }
        else
        {
            Airline *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = newNode;
        }

        NewDataAirline(AirplaneID, Capacity, Company);
    }
};

#endif