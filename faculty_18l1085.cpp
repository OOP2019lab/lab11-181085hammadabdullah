#include "stdafx.h"
#include "faculty_18l1085.h"
#include "person_18l1085.h"
faculty::faculty(string fname,string lname,int age,int Course_count,int No)
	: person(fname,lname,age)
{
	
	course_count=Course_count;
	no=No;
}
void faculty::setcourse_count(int n){
	course_count=n;
}
void faculty::setno(int n){
no=n;
}
int faculty::getcourse_count(){
return course_count;
}
int faculty::getno(){
return no;
}
void faculty::printfaculty(){
	person::printinfo();
	cout<<" ,No of courses :"<<course_count<<", EXT "<<no<<endl;
}
faculty::~faculty(){
cout<<"faculty destrctor called"<<endl;
}