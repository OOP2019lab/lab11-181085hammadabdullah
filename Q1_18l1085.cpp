// Q1_18l1085.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "faculty_18l1085.h"
#include "person_18l1085.h"
#include "student_18l1085.h"
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	student s1("Ted","THomsan",22,3.91);
	faculty f1("Richard", "Krap",45,2,420);
	s1.printstudent();
	f1.printfaculty();
	return 0;
}

