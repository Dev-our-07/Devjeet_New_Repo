/*****
    Air Ticket System
    Author: Devjeet Kour (241103060)
    OOP C++ Project
    ------------------------------------------------
    Dated: 3rd October 2023
    ------------------------------------------------
Aim: The system should allow users to:
	1- Book a flight
	2- Cancel a flight
	3- Check flight availability
	4- Display flight information
	5- Display ticket information
*****/
#include <iostream>
#include <string>
using namespace std;

class Flight    //Information about the flight
{
    private:
    string flightNumber;
    string departureCity;
    string arrivalCity;
    int arrivalTime;
    int availableSeats;

    public:
    //Default Constructor
    Flight()
    {
        flightNumber = "NA";
        departureCity = "NA";
        arrivalCity = "NA";
        arrivalTime = 0;
        availableSeats = 0;
    }

    //Parameterized Constructor
    Flight(string fNum, string depCity, string arrCity, int arrTime, int seats)  
    {
        flightNumber = fNum;
        departureCity = depCity;
        arrivalCity = arrCity;
        arrivalTime = arrTime;
        availableSeats = seats;
    }
    
    bool bookSeat() 
    {
        if (availableSeats > 0) 
        {   availableSeats--;
            return true;
        }
        return false;
    }

    void cancelSeat() 
    {
        availableSeats++;
    }

    void inputFlightInfo() 
    {
        cout << "Enter Flight Number: ";
        cin >> flightNumber;
        cout << "Enter Departure City: ";
        cin >> departureCity;
        cout << "Enter Arrival City: ";
        cin >> arrivalCity;
        cout << "Enter Arrival Time: ";
        cin >> arrivalTime;
        cout << "Enter Available Seats: ";
        cin >> availableSeats;
    }

    void displayFlightInfo() const 
    {
        cout << "Flight Number: " << flightNumber << endl;
        cout << "Departure City: " << departureCity << endl;
        cout << "Arrival City: " << arrivalCity << endl;
        cout << "Arrival Time: " << arrivalTime << endl;
        cout << "Available Seats: " << availableSeats << endl;
    }
};

class Passanger         //Information about the passanger
{
    private:
    string name;
    string passportNumber;
    int phoneNumber;

    public:
    //Default Constructor
    Passanger() 
    {
        name = "NA";
        passportNumber = "NA";
        phoneNumber = 0;
    }

    //Parameterized Constructor
    Passanger(string pName, string pNumber, int pPhone) 
    {
        name = pName;
        passportNumber = pNumber;
        phoneNumber = pPhone;
    }

    void inputPassangerInfo() 
    {
        cout << "Enter Passanger Name: ";
        cin >> name;
        cout << "Enter Passport Number: ";
        cin >> passportNumber;
        cout << "Enter Phone Number: ";
        cin >> phoneNumber;
    }

    void displayPassangerInfo() const  //const will not allow to modify any member variable of the class
    {
        cout << "Passanger Name: " << name << endl;
        cout << "Passport Number: " << passportNumber << endl;
        cout << "Phone Number: " << phoneNumber << endl;
    }

    bool bookFlight(Flight &flight) 
    {
        return flight.bookSeat();
    }

    void cancelFlight(Flight &flight) 
    {
        flight.cancelSeat();
    }
};

class Ticket    //Information about the ticket
{
    private:
    string passengerName;
    string flightNumber;
    string seatNumber;

    public:
    //Default Constructor
    Ticket() 
    {
        passengerName = "NA";
        flightNumber = "NA";
        seatNumber = "NA";
    }

    //Parameterized Constructor
    Ticket(string pName, string fNum, string sNum) 
    {
        passengerName = pName;
        flightNumber = fNum;
        seatNumber = sNum;
    }

    void inputTicketInfo() 
    {
        cout << "Enter Passenger Name: ";
        cin >> passengerName;
        cout << "Enter Flight Number: ";
        cin >> flightNumber;
        cout << "Enter Seat Number: ";
        cin >> seatNumber;
    }

    void displayTicketInfo() const 
    {
        cout << "Passenger Name: " << passengerName << endl;
        cout << "Flight Number: " << flightNumber << endl;
        cout << "Seat Number: " << seatNumber << endl;
    }
};

int main() 
{   //Stable test cases
    Flight flight1("AI101", "New Delhi", "Bangalore", 1500, 100);
    Passanger passanger1("Raj", "P123456", 1234567890);
    Ticket ticket1("Raj", "AI101", "12A"); 
    cout << "Flight Information:" << endl;
    flight1.displayFlightInfo();            //Total 100 seats available
    cout << endl;   
    cout << "Passanger Information:" << endl;
    passanger1.displayPassangerInfo();      //Displaying Passanger Info
    cout << endl;
    cout << "Booking Flight..." << endl;
    if (passanger1.bookFlight(flight1))     //Booking a flight
    {
        cout << "Flight booked successfully!" << endl;
        cout << endl;
        cout << "Ticket Information:" << endl;
        ticket1.displayTicketInfo();
    } 
    else                                    //If no seats are available
    {
        cout << "No available seats!" << endl;
    }
    cout << endl;
    cout << "Updated Flight Information after booking:" << endl;
    flight1.displayFlightInfo();       //Displaying updated flight info after booking
    cout << endl;
    cout << "Cancelling Flight..." << endl;
    passanger1.cancelFlight(flight1);   //Cancelling the flight
    cout << "Flight cancelled successfully!" << endl;
    cout << endl;
    cout << "Updated Flight Information after cancellation:" << endl;
    flight1.displayFlightInfo();    //Displaying updated flight info after cancellation
    
    //Dynamic test cases
    Flight flight2;
    Passanger passanger2;
    Ticket ticket2;
    cout << "\nEnter details for a new flight:" << endl;
    flight2.inputFlightInfo();         //Input flight details
    cout << "\nEnter details for a new passanger:" << endl;
    passanger2.inputPassangerInfo();   //Input passanger details    
    cout << "\nBooking Flight for the new passanger..." << endl;
    if (passanger2.bookFlight(flight2)) //Booking flight for the new pass
    {
        cout << "Flight booked successfully!" << endl;
        cout << "\nEnter details for the ticket:" << endl;
        ticket2.inputTicketInfo();     //Input ticket details
        cout << "\nTicket Information:" << endl;
        ticket2.displayTicketInfo();   //Displaying ticket info
    } 
    else 
    {
        cout << "No available seats!" << endl;
    }
    cout << "\nUpdated Flight Information after booking:" << endl;
    flight2.displayFlightInfo();       //Displaying updated flight info after booking
    cout << endl;
    cout << "Cancelling Flight for the new passanger..." << endl;
    passanger2.cancelFlight(flight2);  //Cancelling flight for the new pass
    cout << "Flight cancelled successfully!" << endl;
    cout << "\nUpdated Flight Information after cancellation:" << endl;
    flight2.displayFlightInfo();       //Displaying updated flight info after cancellation
    

    return 0;
}