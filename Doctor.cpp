#include <iostream>
#include "Doctor.h"
#include "Person.h"
using namespace std;

// Default constructor
doctor::doctor() : person() {
    this->availability = "N/A";
    this->fee = 0;
    this->doctorID = "N/A";
    this->specilization = "NONE";
}

// Parameterized constructor
doctor::doctor(const string name, const int age, const string number, const string email, const string &a, const double &b, const string &c, const string &d): person(name, age, number, email) 
{
    this->availability = a;
    this->fee = b;
    this->specilization = c;
    this->doctorID = d;
}

// Getter for fee
double doctor::getfee() const {
    return this->fee;
}

// Setter for fee
void doctor::setfee(const double &a) {
    this->fee = a;
}

// Setter for availability
void doctor::setavailability(const string &a) {
    this->availability = a;
}

// Setter for doctorID
void doctor::setdoctorid(const string &b) {
    this->doctorID = b;
}

// Setter for specialization
void doctor::setspecilization(const string &c) {
    this->specilization = c;
}

// Getter for availability
string doctor::getavailability() const {
    return this->availability;
}

// Getter for specialization
string doctor::getspecilization() const {
    return this->specilization;
}

// Getter for doctorID
string doctor::getdoctorid() const {
    return this->doctorID;
}

// Function to print doctor's information
void doctor::printinfo(ostream &cout) const {
    cout << "Doctor's Name: " << this->person::getname() << endl;
    cout << "Doctor's Contact Number: " << this->person::getnumber() << endl;
    cout << "Doctor's Email: " << this->person::getemail() << endl;
    cout << "Doctor's ID: " << this->getdoctorid() << endl;
    cout << "Doctor's Availability: " << this->getavailability() << endl;
    cout << "Doctor's Specialization: " << this->getspecilization() << endl;
    cout << "Doctor's Consultation Charges: " << this->getfee() << endl;
}

// Function to read doctor's information from input
void doctor::readinfo(istream &cin) {
    this->person::readinfo(cin);
    cout << "Enter Specialization: ";
    cin >> this->specilization;
    cout << endl;

    cout << "Enter Charges: ";
    cin >> this->fee;
    cout << endl;

    cout << "Enter ID: ";
    cin >> this->doctorID;
    cout << endl;

    cout << "Enter Availability: ";
    cin >> this->availability;
    cout << endl;
}

// Overloaded output operator
ostream &operator<<(ostream &cout, const doctor &a) {
    a.printinfo(cout);
    return cout;
}

// Overloaded input operator
istream &operator>>(istream &cin, doctor &a) {
    a.readinfo(cin);
    return cin;
}
