/* 6. Flight Reservation System 
Concepts: Dynamic array of objects, object filtering 
Problem: 
Create a class Flight with data members: flightNo, source, destination, seatsAvailable. 
• Allocate flights dynamically (new Flight[n]). 
• Display all flights going to a particular destination entered by user. 
• Update seat count when a booking is made. 
Hint: 
Use functions for searching and seat modification.*/
#include <iostream>
#include <string>
using namespace std;

class Flight {
    string flightNo;
    string source;
    string destination;
    int seatsAvailable;
public:
    Flight() {
        flightNo = "";
        source = "";
        destination = "";
        seatsAvailable = 0;
    }
    void inputData() {
        cout << "Enter Flight No, Source, Destination and Seats Available: ";
        cin >> flightNo >> source >> destination >> seatsAvailable;
    }
    string getDestination() {
        return destination;
    }
    void bookSeats(int seats) {
        if (seats <= seatsAvailable) {
            seatsAvailable -= seats;
            cout << "Booking successful! Seats booked: " << seats << endl;
        } else {
            cout << "Booking failed! Not enough seats available." << endl;
        }
    }
    void displayData() {
        cout << "Flight No: " << flightNo << ", Source: " << source
             << ", Destination: " << destination
             << ", Seats Available: " << seatsAvailable << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of flights: ";
    cin >> n;

    Flight* flights = new Flight[n];

    for (int i = 0; i < n; i++) {
        flights[i].inputData();
    }

    string dest;
    cout << "Enter destination to search flights: ";
    cin >> dest;

    cout << "Flights to " << dest << ":\n";
    for (int i = 0; i < n; i++) {
        if (flights[i].getDestination() == dest) {
            flights[i].displayData();
        }
    }

    int flightIndex, seatsToBook;
    cout << "Enter flight index (0 to " << n-1 << ") to book seats: ";
    cin >> flightIndex;
    cout << "Enter number of seats to book: ";
    cin >> seatsToBook;

    if (flightIndex >= 0 && flightIndex < n) {
        flights[flightIndex].bookSeats(seatsToBook);
    } else {
        cout << "Invalid flight index!" << endl;
    }

    delete[] flights; // Free the allocated memory
    return 0;
}