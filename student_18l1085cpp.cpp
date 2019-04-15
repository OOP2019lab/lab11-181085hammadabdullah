#include "stdafx.h"
#include "person_18l1085.h"
#include "student_18l1085.h"

student::student (string fname,string lname,int age,float Cgpa): person(fname,lname,age)		
{
	cgpa=Cgpa;
cout << "Student constrctor  called"<<endl;
}
void student::setgpa(float Cgpa){
cgpa=Cgpa;
}
float student::getgpa(){
return cgpa;
}
void student::printstudent(){
person::printinfo();
cout<<", with cgpa of "<<cgpa<<endl; 
}
student::~student(){

	cout<<"Destructor of student has been called"<<endl;
}