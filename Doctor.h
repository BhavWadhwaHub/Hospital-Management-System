#pragma once
#include<iostream>
#include"Person.h"
using namespace std;
class doctor:public person
{
private:
	string availability;
	double fee;
	string specilization;
	string doctorID;
public:
	doctor();
	doctor(const string name,const int age,const string number,const string email,const string &a,const double &b,const string &c,const string &d);

	double getfee()const;
	void setfee(const double &a);

	string getspecilization()const;
	void setspecilization(const string &);

	string getdoctorid()const;
	void setdoctorid(const string &);

	string getavailability()const;
	void setavailability(const string &);

	void printinfo(ostream &cout)const;
	void readinfo(istream &cin);

	friend ostream &operator<<(ostream &cout,const doctor &a);
	friend istream &operator>>(istream &cin,doctor &b);
};