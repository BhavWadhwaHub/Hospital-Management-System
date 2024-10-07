#include <iostream>
#include <string>
#include "Patient.h"
#include "Person.h"
using namespace std;
//patient class methods
patient::patient():person()
{
	this->gender="N/A";
	this->problem="N/A";
	this->address="N/A";
	this->doctorAssignedID="N/A";
    this->medicalhistory="N/A";
}
patient::patient(const string &name,const int &age,const string &number,const string &email,const string &gender,const string &address,const string &problem,const string &patientID,const string &history):person(name,age,number,email)
{
	this->address=address;
	this->gender=gender;
	this->problem=problem;
	this->doctorAssignedID="N/A";
	this->patientID=patientID;
    this->medicalhistory=history;

}
string patient::getpatientID() const 
{       
    return this->patientID;
}

void patient::setpatientID(const string &id) 
{
    this->patientID = id;
}
string patient::getdoctorAssignedID() const 
{
    return this->doctorAssignedID;
}

void patient::setdoctorAssignedID(const string &id) 
{
    this->doctorAssignedID = id;
}
string patient::getaddress()const
{
	return this->address;
}
string patient::getproblem()const
{
	return this->problem;
}
string patient::getgender()const
{
	return this->gender;
}
void patient::setaddress(const string &a)
{
	this->address=a;
}
void patient::setgender(const string &b)
{
	this->gender=b;
}
void patient::setproblem(const string &c)
{
	this->problem=c;
}
string patient::getmedicalhistory()const
{
	return this->medicalhistory;
}
void patient::setmedicalhistory(const string &a)
{
	 this->medicalhistory=a;
}

void patient::printinfo(ostream &cout)const
{
	cout<<"Patient Details"<<endl;
	cout<<"Patient Name: "<<this->person::getname();
	cout<<endl;
	cout<<"Patient Age: "<<this->person::getage();
	cout<<endl;
	cout<<"Patient Contact Number: "<<this->person::getnumber();
	cout<<endl;
	cout<<"Patients Email: " <<this->person::getemail();
	cout<<endl;
	cout<<"Patient Gender: "<<this->getgender();
	cout<<endl;
	cout<<"Address: "<<this->getaddress();
	cout<<endl;
	cout<<"Patient Problem: "<<this->getproblem();
	cout<<endl;
	cout<<"Patients Medical History: "<<this->getmedicalhistory();
	cout<<endl;
}
void patient::readinfo(istream &cin)
{
    this->person::readinfo(cin);
	cout<<"Enter Patients Problem: ";
	cin>>this->problem;
	cout<<endl;
	cout<<"Enter Gender: ";
	cin>>this->gender;
	cout<<endl;
	cout<<"Enter Patients Address";
	cin>>this->address;
	cout<<endl;
	cout<<"Any Medical Problems in the Past? : ";
	cin>>this->medicalhistory;
	cout<<endl;
}
ostream &operator<<(ostream & cout,const patient &a)
{
	a.printinfo(cout);
	return cout;
}

istream &operator>>(istream &cin,patient &a)
{
	a.readinfo(cin);
	return cin;
}