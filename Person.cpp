#include<iostream>
#include<string>
#include "Person.h"
using namespace std;
//person class methods
person::person()
{
	this->name="N/A";
	this->age=0;
	this->email="N/A";
	this->number="N/A";
}
person::person(const string name,const int age,const string number,const string email)
{
	this->name=name;
	this->email=email;
	this->number=number;
	this->age=age;
}
int person::getage()const
{
	return this->age;
}
string person::getnumber()const
{
	return this->number;
}
string person::getname()const
{
	return this->name;
}
string person::getemail()const
{
	return this->email;
}
void person::setnumber(const string &a)
{
	this->number=a;
}
void person::setage(const int &a)
{
	this->age=a;
}
void person::setemail(const string &b)
{
	this->email=b;
}
void person::setname(const string &c)
{
	this->name=c;
}
bool person::isnum(const char &a)
{
		if(a>47 && a<58)
		{
			return true;
		}
		return false;
}

void person::printinfo(ostream &cout)const
{
	cout<<"Person Details Record"<<endl;
	cout<<"Name: "<<this->getname()<<endl;
	cout<<"Age: "<<this->getage()<<endl;
	cout<<"Email:"<<this->getemail()<<endl;
	cout<<"Contact Number: "<<this->getnumber()<<endl;
}
void person::readinfo(istream &cin)
{
	int i=0;
	cout<<"Enter name: ";
	cin>>this->name;
	cout<<endl;
	cout<<"Enter age: ";
	cin>>this->age;
	cout<<"Enter Contact Number: ";
	cin>>this->number;
	while(i < this->number.size()) 
    {
    if(!isnum(this->number[i])) 
    {
        cout << "Invalid number, Enter Again: ";
        cin >> this->number;
        i = 0; 
    } else
        {
        i++;
        }
    }

	cout<<"Enter Email: ";
	cin>>this->email;
	cout<<endl;
}
ostream &operator<<(ostream &cout,const person &a)
{
	a.printinfo(cout);
	return cout;
}
istream & operator>>(istream &cin,person &a)
{
	a.readinfo(cin);
	return cin;
}