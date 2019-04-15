#include "stdafx.h"
#include "person_18l1085.h"
person::person(string First_name,string Last_name,int Age)
		:first_name(First_name),last_name(Last_name),age(Age)
	{
	cout<<"Person constructor called"<<endl;
	
	}
void person::setfname(string fname){

first_name=fname;
}
void person::setlname(string lname){
	last_name=lname;
}
string person::getfname(){
	return first_name;
}
string person::getlname(){
	return last_name;
} 
void person::printinfo(){
	cout<<first_name<<" "<<last_name<<" is"<<age<<" years old"<<endl;
}
person::~person(){
	cout<<"person destrctor called"<<endl;
	
	}