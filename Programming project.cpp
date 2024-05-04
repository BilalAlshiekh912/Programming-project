#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "student.h"

using namespace std;
int main()
{
	int option;
	
	
	

	again:
		StudentManagementSystem student1;
		student1.AddStudentRecord();
		cout << "If you like to add another student please press 1 then enter" << endl;
		cin >> option;
		if (option == 1);
		{
			goto again;
		}
	

	
	


	return 0;
}