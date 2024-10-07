#pragma once
#include<iostream>
#include<string>
using namespace std;
class person
{
private:
	string name;
	int age;
	string number;
	string email;
public:
	person();
	person(const string name,const int age,const string number,const string email);

	int getage()const;
	void setage(const int &a);

	string getnumber()const;
	void setnumber(const string &b);

	string getname()const;
	void setname(const string &d);

	string getemail()const;
	void setemail(const string &c);
	
	void printinfo(ostream &cout)const;
	void readinfo(istream &cin);

	bool isnum(const char &a);
	
	friend ostream &operator<<(ostream &cout,const person &a);
	friend istream &operator >>(istream &cin,person &b);
};