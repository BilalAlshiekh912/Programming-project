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
	
	

	string getName()
	{
		
		
		getline(cin,StudentName);
		return StudentName;

	}
	void setName(string studentname)
	{

		StudentName = studentname;
	}
	void setID(int studentid)
	{

		StudentID = studentid;
	}
	int getID() 
	{
		
		
		cin >> StudentID;
		return StudentID;
		
	}
	void setMarks(double arabicmarks, double socialstudiesmarks,double englishmarks,double secondlanguagemarks , double mathematicsmarks , double sciencemarks)
	{
		ArabicMarks = arabicmarks;
		SocialStudiesMarks = socialstudiesmarks;
		EnglishMarks = englishmarks;
		SecondLanguageMarks = secondlanguagemarks;
		MathematicsMarks = mathematicsmarks;
		ScienceMarks = sciencemarks;

	}
	double getMarks() const {
	
		return ArabicMarks, SocialStudiesMarks, EnglishMarks, SecondLanguageMarks, MathematicsMarks, ScienceMarks;
	}
	void setGrade(double grade)
	{
		Grade = grade;
	}
	double getGrade() const
	{
		return Grade;
	}
	double addMarks()
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
	double calculateGrade() {

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
		getName() = "";
		ArabicMarks = 0;
		SocialStudiesMarks = 0;
		EnglishMarks = 0;
		SecondLanguageMarks = 0;
		MathematicsMarks = 0;
		ScienceMarks = 0;
	
	}
	
};
class SearchEngine : public Student
{
private:
	string Data[9];

public:

	
	void setdata(string data[])
	{
		data = Data;

	}
	void Searchbyname()
	{


		string SearchName;
		cout << "Please enter the student name you want to search for" << endl;
		cin.ignore(1, NULL);
		getline(cin, SearchName);
		ifstream StudentRecord;
		StudentRecord.open("Students Record.txt", ios::in);
		while (!StudentRecord.eof())
		{
	
			for (int i = 0; i < 9; i++)
			{
				getline(StudentRecord, Data[i]);

			}

			if (Data[0] == SearchName)
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
			else if (Data[0] != SearchName)
			{
				for (int i = 0; i < 9; i++ )
				{
					Data[i] = "";
				}

			}
			





		}
		
		if (Data[0] != SearchName)
		{
			cout << "The student name you searched for is not in the system" << endl; 
		}
		StudentRecord.close();
	}







	void Searchbyid()
	{
		
	
		cout << "Please enter the student ID you want to search for" << endl;
		string SearchID;
		cin.ignore(1, NULL);
		getline(cin,SearchID);

		ifstream StudentRecord;
		StudentRecord.open("Students Record.txt", ios::in);
	
		while (!StudentRecord.eof())
		{
			
			for (int i = 0; i < 9; i++)
			{
				getline(StudentRecord, Data[i]);

			}
			if (Data[1] == SearchID)
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
			else if (Data[1] != SearchID)
			{
				for (int i = 0; i < 9; i++)
				{
					Data[i] = "";
				}

			}


		
		}
			if (Data[1] != SearchID && StudentRecord.eof() )
			{
			cout << "The ID you searched for is unavailable in the system" <<  endl;
			
			}
		
	}


	

	};
	




	class StudentManagementSystem : public SearchEngine

	{
	private:


	public:

		void AddStudentRecord()
		{
			cout << "Please enter the students name" << endl;
			getName();
			cout << "Please enter the students ID" << endl;
			getID();
			addMarks();
			calculateGrade();
			WriteData();
			ResetData();


		}

		void SearchStudentRecord()
		{

			int choice;
			cout << "1.Search by Name\n" "2.Search by ID" << endl;
				s:
					cin >> choice;
		if (choice == 1)
		{
			Searchbyname();
		}
		else if (choice == 2)
		{
			Searchbyid();
		}
		else
		{
			cout << "Please enter a valid number" << endl;
			goto s;
		}
			
		};





	};
	class Menu : public StudentManagementSystem
	{
	private:
		int choice;
	public :
		void DisplayMenu()
		{
			cout << "Welcome to Student Management System" << endl;
			cout << "1. Add student record" << endl;
			cout << "2. Search student record" << endl;
			cout << "3. Modify student record" << endl;
			cout << "4. Generate mark sheet" << endl;
			cout << "5. Delete student record" << endl;
			cout << "6. Change admin password" << endl;
			cout << "7. Exit" << endl;
			cout << "Enter your choice: ";
		}
		int SelectOption()
		{
			int option;
			cin >> option;
			return option;
		}
		void ExecuteChoice() {
			int choice;
			choice = SelectOption();
			switch (choice) {
			case 1: 
			{
				AddStudentRecord();
				break;
			}

			case 2:
			{
				SearchStudentRecord();
				break;
			}
			case 3:
			{
				break;
			}
			case 4:
			{
				break;
			}
			case 5:
			{
				break;
			}
			case 6:
			{
				break;
			}
			case 7:
			{

				break;
			}
			default:
				cout << "Invalid Choice" << endl;
				break;
			}
		}


	};
