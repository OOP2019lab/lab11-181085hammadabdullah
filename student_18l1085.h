#pragma once
#include "person_18l1085.h"

class student : private person{

private:
	string fyp_name;
protected:
	float cgpa;
public:
	student (string fname,string lname,int age,float Cgpa);
	void printstudent();
	void setgpa(float Cgpa);
	float getgpa();
	~student();

};