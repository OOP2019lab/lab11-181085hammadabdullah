#pragma once
#include "person_18l1085.h"

class faculty: private person{
protected:
	int course_count;
	int no;
public:
	faculty(string fname,string lname,int age,int Course_count,int No);
	void setcurrent(int n);
	void setcourse_count(int n);
	void setno(int n);
	int getcurrent();
	int getcourse_count();
	int getno();
	void printfaculty();
	~faculty();

};