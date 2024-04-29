#include<iostream>
#include<string>
#include<fstream>
#include<vector>

using namespace std;



class Student
{
private:
	string StudentName;
	int ID;
	double SocialStudiesMarks, EnglishMarks, MathematicsMarks, ArabicMarks, ScienceMarks, SecondLanguageMarks;
	char Grade;

public:

	void setName(string studentname)
	{

		StudentName = studentname;
	}
	string getName()
	{
		cout << "Please enter the student's full name." << endl;
		getline(cin, StudentName);
		return StudentName;
	}
	void setID(int id)
	{
		ID = id;
	}
	int getID()
	{
		cout << "Please enter the student's ID." << endl;
		cin >> ID;
		return ID;
	}
	void setMarks(double socialstudiesmarks, double englishmarks, double mathematicsmarks, double arabicmarks, double sciencemarks, double secondlanguagemarks)
	{
		SocialStudiesMarks = socialstudiesmarks;
		EnglishMarks = englishmarks;
		MathematicsMarks = mathematicsmarks;
		ArabicMarks = arabicmarks;
		ScienceMarks = sciencemarks;
		SecondLanguageMarks = secondlanguagemarks;
	}
	double getMarks()
	{
		
		cout << "Please enter the student's Social studies mark" << endl;
		ssm:
		cin >> SocialStudiesMarks;
		if (SocialStudiesMarks > 100 || SocialStudiesMarks < 0)
		{
			cout << "Please enter a valid mark between 0 and 100" << endl;
			goto ssm;
		}
		cout << "Please enter the student's English mark" << endl; 
		em:
		cin >> EnglishMarks;
		if (EnglishMarks > 100 || EnglishMarks < 0)
		{
			cout << "Please enter a valid mark between 0 and 100" << endl;
			goto em;
		}
		cout << "Please enter the student's Mathematics mark" << endl;
		mm:
		cin >> MathematicsMarks;
		if (MathematicsMarks > 100 || MathematicsMarks < 0)
		{
			cout << "Please enter a valid mark between 0 and 100" << endl;
			goto mm;
		}
		cout << "Please enter the student's Arabic mark" << endl;
		am:
		cin >> ArabicMarks;
		if (ArabicMarks > 100 || ArabicMarks < 0)
		{
			cout << "Please enter a valid mark between 0 and 100" << endl;
			goto am;
		}
		cout << "Please enter the student's Science mark" << endl;
		sm:
		cin >> ScienceMarks;
		if (ScienceMarks > 100 || ScienceMarks < 0)
		{
			cout << "Please enter a valid mark between 0 and 100" << endl;
			goto sm;
		}
		cout << "Please enter the student's Second language (french,italian,spanish,german,etc...) mark" << endl;
		slm:
		cin >> SecondLanguageMarks;
		if (SecondLanguageMarks > 100 || SecondLanguageMarks < 0)
		{
			cout << "Please enter a valid mark between 0 and 100" << endl;
			goto slm;
		}
		return SocialStudiesMarks, EnglishMarks, MathematicsMarks, ArabicMarks, ScienceMarks, SecondLanguageMarks;
	}
	void setGrade(char grade)
	{
		Grade = grade;
	}
	char getGrade()
	{
		return Grade;
	}
	void Writeinfo()
	{
		cout << StudentName << endl;
		cout << ID << endl;
		cout << "Student Marks""\nSocial studies: " << SocialStudiesMarks << "\nEnglish: " << EnglishMarks << "\nMathematics: " << MathematicsMarks << "\nArabic: " << ArabicMarks << "\nScience: " << ScienceMarks << "\nSecond language: " << SecondLanguageMarks << endl;




	}

};
