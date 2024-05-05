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
	
	

	string getname()
	{
		
		
		getline(cin,StudentName);
		return StudentName;

	}
	void setname(string studentname)
	{

		StudentName = studentname;
	}
	void setID(int studentid)
	{

		StudentID = studentid;
	}
	int getid()
	{
		
		
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
			cout << "This student has achived an A grade with a total percentage of " << Grade << "%" << endl;
		
		}
		else if (Grade <= 89 && Grade >= 80)
		{
			cout << "This student has achived an B grade with a total percentage of " << Grade << "%" <<  endl;

		}
		else if (Grade <= 79 && Grade >= 70)
		{
			cout << "This student has achived an C grade with a total percentage of " << Grade << "%" << endl;

		}
		else if (Grade <= 69 && Grade >= 60)
		{
			cout << "This student has achived an D grade with a total percentage of " << Grade << "%" << endl;

		}
		else
		{
			cout << "This student has failed and got an F grade witha total percentage of " << Grade << "%" << endl;
		}
		
		


		return Grade;
	}

	

	
	
	void WriteData()
	{
		fstream StudentRecord;
		StudentRecord.open("Students Record.txt", ios::app);
		StudentRecord << StudentName << endl;
		StudentRecord << StudentID << endl;
		StudentRecord << "Arabic Marks: " << ArabicMarks << "\n"" Social Studies Marks: " << SocialStudiesMarks << "\n"" English Marks: " << EnglishMarks << "\n"" Second Language Marks: " << SecondLanguageMarks << "\n"" Mathematics Marks:  " << MathematicsMarks << "\n"" Science Marks: " << ScienceMarks << endl;
		if (Grade <= 100 && Grade >= 90)
		{
			StudentRecord << "This student has achived an A grade with a total percentage of " << Grade << "%" << endl;

		}
		else if (Grade <= 89 && Grade >= 80)
		{
			StudentRecord << "This student has achived an B grade with a total percentage of " << Grade << "%" << endl;

		}
		else if (Grade <= 79 && Grade >= 70)
		{
			StudentRecord << "This student has achived an C grade with a total percentage of " << Grade << "%" << endl;

		}
		else if (Grade <= 69 && Grade >= 60)
		{
			StudentRecord << "This student has achived an D grade with a total percentage of " << Grade << "%" << endl;

		}
		else
		{
			StudentRecord << "This student has failed and got an F grade witha total percentage of " << Grade << "%" << endl;
		}
		StudentRecord.close();
		
	}
	
	void ResetData()
	{
		getname() = "";
		ArabicMarks = 0;
		SocialStudiesMarks = 0;
		EnglishMarks = 0;
		SecondLanguageMarks = 0;
		MathematicsMarks = 0;
		ScienceMarks = 0;
	
	}
	
};

class StudentManagementSystem : public Student
{
private:


public:

	void AddStudentRecord()
	{

		cout << "Please enter the student's full name" << endl;
		getname();
		cout << "Please enter the student's ID" << endl;
		getid();
		addmarks();
		calculategrade();
		WriteData();
		ResetData();



	}
		void SearchStudentRecord()
		{
			int choice;

		}
};
class SearchEngine : public StudentManagementSystem
{
private:
	string Data[9];
public :
	void Searchbyname()
	{

	
		string Search;

		cout << "Please enter the student name you want to search for" << endl;
		getline(cin, Search);

		ifstream StudentRecord;
		StudentRecord.open("Students Record.txt", ios::in);
		while (!StudentRecord.eof())
		{
			
			getline(StudentRecord, Data[0]);
			getline(StudentRecord, Data[1]);
			getline(StudentRecord, Data[2]);
			getline(StudentRecord, Data[3]);
			getline(StudentRecord, Data[4]);
			getline(StudentRecord, Data[5]);
			getline(StudentRecord, Data[6]);
			getline(StudentRecord, Data[7]);
			getline(StudentRecord, Data[8]);

			
			if (Data[0] == Search)
			{
				cout << "The Student was found" << endl;
				cout << "Name: " << Data[0] << endl;
				cout << "ID: " << Data[1] << endl;
				cout << Data[2] << endl;
				cout << Data[3] << endl;
				cout << Data[4] << endl;
				cout << Data[5] << endl;
				cout << Data[6] << endl;
				cout << Data[7] << endl;
				cout << Data[8] << endl;
				break;
			}
			else if (Data[0] != Search)
			{
				Data[0] = "";
				Data[1] = "";
				Data[2] = "";
				Data[3] = "";
				Data[4] = "";
				Data[5] = "";
				Data[6] = "";
				Data[7] = "";
				Data[8] = "";


			}
			

			
					
			
				
		}
		if (Data[0] != Search || StudentRecord.eof())
		{
			int choice;
			cout << "The Student ith the ID: " << Search << " was not found" << endl;
		StudentnotFoundMenu:
			cout << "Press: \n" << "1.To add a new student to the record\n" << "2.To research the student record " << endl;
			cin >> choice;
			if (choice < 1 || choice > 2)
			{
				cout << "Invalid option" << endl;
				goto StudentnotFoundMenu;
			}
			switch (choice)
			{
			case 1:
				ResetData();
				AddStudentRecord();
			case 2:
				int choice1;
			StudentnotFoundMenu1:
				cout << "Press: \n" << "1.To Search student By Name\n" << "2.To Search student by ID " << endl;
				cin >> choice1;
				if (choice1 < 1 || choice1 > 2)
				{
					cout << "Invalid option" << endl;
					goto StudentnotFoundMenu1;
				}
				switch (choice)
				{
				case 1:
				
					
						Data[0] = "";
						Data[1] = "";
						Data[2] = "";
						Data[3] = "";
						Data[4] = "";
						Data[5] = "";
						Data[6] = "";
						Data[7] = "";
						Data[8] = "";					
					Searchbyname();
				case 2:
					
						Data[0] = "";
						Data[1] = "";
						Data[2] = "";
						Data[3] = "";
						Data[4] = "";
						Data[5] = "";
						Data[6] = "";
						Data[7] = "";
						Data[8] = "";
					searchbyid();
				}
			}
		}
		
		StudentRecord.close();
		
			

		
	}

	void searchbyid()
	{
		string Search;

		cout << "Please enter the student ID you want to search for" << endl;
		getline(cin, Search);

		ifstream StudentRecord;
		StudentRecord.open("Students Record.txt", ios::in);
		while (!StudentRecord.eof())
		{
			getline(StudentRecord, Data[0]);
			getline(StudentRecord, Data[1]);
			getline(StudentRecord, Data[2]);
			getline(StudentRecord, Data[3]);
			getline(StudentRecord, Data[4]);
			getline(StudentRecord, Data[5]);
			getline(StudentRecord, Data[6]);
			getline(StudentRecord, Data[7]);
			getline(StudentRecord, Data[8]);

			if (Data[1] == Search)
			{
				cout << "The Student was found" << endl;
				cout << "Name: " << Data[0] << endl;
				cout << "ID: " << Data[1] << endl;
				cout << Data[2] << endl;
				cout << Data[3] << endl;
				cout << Data[4] << endl;
				cout << Data[5] << endl;
				cout << Data[6] << endl;
				cout << Data[7] << endl;
				cout << Data[8] << endl;
				break;
			}
			 if (Data[1] != Search)
			{
				Data[0] = "";
				Data[1] = "";
				Data[2] = "";
				Data[3] = "";
				Data[4] = "";
				Data[5] = "";
				Data[6] = "";
				Data[7] = "";
				Data[8] = "";


			}
			
			 
			 if (Data[1] != Search || StudentRecord.eof())
			 {
				 int choice;
				 cout << "The Student with the ID: " << Search << " was not found" << endl;
			 StudentnotFoundMenu:
				 cout << "Press: \n" << "1.To add a new student to the record\n" << "2.To research the student record " << endl;
				 cin >> choice;
				 if (choice < 1 || choice > 2)
				 {
					 cout << "Invalid option" << endl;
					 goto StudentnotFoundMenu;
				 }
				 switch (choice)
				 {
				 case 1:
					 ResetData();
					 AddStudentRecord();
				 case 2:
					 int choice1;
					 StudentnotFoundMenu1:
					 cout << "Press: \n" << "1.To Search student By Name\n" << "2.To Search student by ID " << endl;
					 cin >> choice1;
					 if (choice1 < 1 || choice1 > 2)
					 {
						 cout << "Invalid option" << endl;
						 goto StudentnotFoundMenu1;
					 }
					 switch (choice)
					 {
					 case 1:
						 
							 Data[0] = "";
							 Data[1] = "";
							 Data[2] = "";
							 Data[3] = "";
							 Data[4] = "";
							 Data[5] = "";
							 Data[6] = "";
							 Data[7] = "";
							 Data[8] = "";


						 
						 Searchbyname();
					 case 2:
						 
							 Data[0] = "";
							 Data[1] = "";
							 Data[2] = "";
							 Data[3] = "";
							 Data[4] = "";
							 Data[5] = "";
							 Data[6] = "";
							 Data[7] = "";
							 Data[8] = "";


						 
						 searchbyid();
					 }
				 }
			 }


			

		}
		StudentRecord.close();

	}

};
