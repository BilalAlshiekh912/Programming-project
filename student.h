#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include <list>

using namespace std;



class Student 
{
private :
	string StudentName;
	int StudentID;
	double ArabicMarks, SocialStudiesMarks, EnglishMarks, SecondLanguageMarks, MathematicsMarks, ScienceMarks;
	double Grade;
	
public :
	
	
	void setname(string studentname)
	{

		StudentName = studentname;
	}
	string getname()
	{
		cout << "Please enter the student's full name" << endl;
		getline(cin, StudentName);
		return StudentName;
	}
	void setID(int studentid)
	{

		StudentID = studentid;
	}
	int getid()
	{
		cout << "Please enter the student's ID" << endl;
		cin >> StudentID;
		return StudentID;
	}
	void setmarks(double arabicmarks, double socialstudiesmarks,double englishmarks,double secondlanguagemarks , double mathematicsmarks , double sciencemarks)
	{
		ArabicMarks = arabicmarks;
		SocialStudiesMarks = socialstudiesmarks;
		EnglishMarks = englishmarks;
		SecondLanguageMarks = secondlanguagemarks;
		MathematicsMarks = mathematicsmarks;
		ScienceMarks = sciencemarks;

	}
	double getmarks() {
	
		return ArabicMarks, SocialStudiesMarks, EnglishMarks, SecondLanguageMarks, MathematicsMarks, ScienceMarks;
	}
	void setgrade(double grade)
	{
		Grade = grade;
	}
	double getgrade()
	{
		return Grade;
	}
	double addmarks()
	{
		
		cout << "Please enter the students marks in Arabic" << endl;
		am:
		cin >> ArabicMarks;
		if (ArabicMarks > 100 || ArabicMarks < 0)
		{
			cout << "Please enter a valid number between 0 and 100" << endl;
			goto am;
		}
		
		cout << "Please enter the students marks in Social Studies" << endl; 
		ssm:
		cin >> SocialStudiesMarks;
		if (SocialStudiesMarks > 100 || SocialStudiesMarks < 0)
		{
			cout << "Please enter a valid number between 0 and 100" << endl;
			goto ssm;
		}
		cout << "Please enter the students marks in English" << endl;
		em:
		cin >> EnglishMarks;
		if (EnglishMarks > 100 || EnglishMarks < 0)
		{
			cout << "Please enter a valid number between 0 and 100" << endl;
			goto em;
		}
		cout << "Please enter the students marks in The second language (French , german , italian etc..)" << endl;
		slm:
		cin >> SecondLanguageMarks;
		if (SecondLanguageMarks > 100 || SecondLanguageMarks < 0)
		{
			cout << "Please enter a valid number between 0 and 100" << endl;
			goto slm;
		}
		cout << "Please enter the students marks in Mathematics" << endl;
		mm:
		cin >> MathematicsMarks;
		if (MathematicsMarks > 100 || MathematicsMarks < 0)
		{
			cout << "Please enter a valid number between 0 and 100" << endl;
			goto mm;
		}
		cout << "Please enter the students marks in Science" << endl;
		sm:
		cin >> ScienceMarks;
		if (ScienceMarks > 100 || ScienceMarks < 0)
		{
			cout << "Please enter a valid number between 0 and 100" << endl;
			goto sm;
		}
		return ArabicMarks, SocialStudiesMarks, EnglishMarks, SecondLanguageMarks, MathematicsMarks, ScienceMarks;
	}
	double calculategrade() {

		Grade = ((ArabicMarks + SocialStudiesMarks + EnglishMarks + SecondLanguageMarks + MathematicsMarks + ScienceMarks) / 600) * 100;
		
		if (Grade <= 100 && Grade >= 90)
		{
			cout << "This student has achived an A grade with a total percentage of " << Grade << endl;
		
		}
		else if (Grade <= 89 && Grade >= 80)
		{
			cout << "This student has achived an B grade with a total percentage of " << Grade << endl;

		}
		else if (Grade <= 79 && Grade >= 70)
		{
			cout << "This student has achived an C grade with a total percentage of " << Grade << endl;

		}
		else if (Grade <= 69 && Grade >= 60)
		{
			cout << "This student has achived an D grade with a total percentage of " << Grade << endl;

		}
		else
		{
			cout << "This student has failed and got an F grade witha total percentage of " << Grade << endl;
		}
	


		return Grade;
	}

	

	
	
	void WriteData()
	{
		fstream StudentRecord;
		StudentRecord.open("Students Record.txt", ios::app);
		StudentRecord << "Name: " << StudentName << endl;
		StudentRecord << "Student ID: " <<  StudentID << endl;
		StudentRecord << "Arabic Marks: " << ArabicMarks << "\n Social Studies Marks: " << SocialStudiesMarks << "\n English Marks: " << EnglishMarks << "\n Second Language Marks: " << SecondLanguageMarks << "\n Mathematics Marks:  " << MathematicsMarks << "\n Science Marks: " << ScienceMarks << endl;
		if (Grade <= 100 && Grade >= 90)
		{
			StudentRecord << "This student has achived an A grade with a total percentage of " << Grade << endl;

		}
		else if (Grade <= 89 && Grade >= 80)
		{
			StudentRecord << "This student has achived an B grade with a total percentage of " << Grade << endl;

		}
		else if (Grade <= 79 && Grade >= 70)
		{
			StudentRecord << "This student has achived an C grade with a total percentage of " << Grade << endl;

		}
		else if (Grade <= 69 && Grade >= 60)
		{
			StudentRecord << "This student has achived an D grade with a total percentage of " << Grade << endl;

		}
		else
		{
			StudentRecord << "This student has failed and got an F grade witha total percentage of " << Grade << endl;
		}
	}

	
	
};





class StudentManagementSystem
{
private:
	vector <Student> Students;
	
public:
	
	Student student1;




	void AddStudentRecord()
	{
		
		student1.getname();
		student1.getid();
		student1.addmarks();
		student1.calculategrade();
		student1.WriteData();

	


	}

};
