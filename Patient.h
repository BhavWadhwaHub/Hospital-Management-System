#pragma once
#include<iostream>
#include"Person.h"
using namespace std;
class patient:public person
{
private:
	string address;
	string problem;
	string gender;
	string medicalhistory;
	string patientID;
	string doctorAssignedID;
public:
	patient();
	patient(const string &name,const int &age,const string &number,const string &email,const string &gender,const string &address,const string &problem,const string &patientID,const string &history);
	
	string getaddress()const;
	void setaddress(const string &a);

	string getproblem()const;
	void setproblem(const string &c);

	string getgender()const;
	void setgender(const string &b);

	string getpatientID() const;
    void setpatientID(const string &id);

    string getdoctorAssignedID() const;
    void setdoctorAssignedID(const string &id);

	string getmedicalhistory()const;
	void setmedicalhistory(const string &b);
	
	void printinfo(ostream &cout)const;
	void readinfo(istream &cin);
	
	friend ostream &operator<<(ostream & cout,const patient &a);
	friend istream &operator>>(istream &cin,patient &b);
};