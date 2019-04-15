#pragma once
#include <iostream>
#include <string>
using namespace std;
using namespace std;

class person
{
private:
	string first_name;
	string last_name;
protected:
	int age;
public:
	person(string First_name,string Last_name,int Age);
	void setfname(string fname);
	void setlname(string lname);
	string getfname();
	string getlname(); 
	void printinfo();
	~person();

};