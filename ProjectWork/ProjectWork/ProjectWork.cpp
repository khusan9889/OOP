#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

class university {
private:
public:
	void menu();
	void schools();
	void admission();
	/*
	void building();
	void professors();
	void staff();
	*/
};

void university::menu()
{
	int choice;
	char x;
	system("cls");

	cout << "\t\t\t ________________________________________ " << endl;
	cout << "\t\t\t|      UNIVERSITY MANAGEMENT SYSTEM      |" << endl;
	cout << "\t\t\t|________________________________________|" << endl;
	cout << "\t\t\t 1.Schools of university" << endl;
	cout << "\t\t\t 2.Admission criteria" << endl;
	cout << "\t\t\t 3.About building" << endl;
	cout << "\t\t\t 4.Our professors" << endl;
	cout << "\t\t\t 5.Staff" << endl;

	cout << "\t\t\t -------------------------------- " << endl;
	cout << "\t\t\t |  Choose option:[1/2/3/4/5]   | " << endl;
	cout << "\t\t\t -------------------------------- " << endl;
	cout << "Enter Your Choose: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		schools();
		break;
	case 2:
		admission();
		break;
	/*
	case 3:
		building();
		break;

	case 4:
		professors();
		break;

	case 5:
		staff();
		break;
	*/
	default:
		cout << "\n\t\t\t INVALID choice... PLease try again :)";
		break;
	}
}

void university::schools()
{
	cout << "\t _____________________________________________________________________" << endl;
	cout << "\t\t\t There are 3 faculties un INHA university.\n\t\tThey are:\n\t\t1.SOCIE-School of computer and information engineering.\n\t\t2.SOL-School of Logistics.\n\t\t3.SBL- School of business logistics.  " << endl;
	cout << "\t ---------------------------------------------------------------------" << endl;
}

void university::admission()
{
	cout << "\t ______________________________________________________________________________________________" << endl;
	cout << "\t\t\t IUT have 3admissions.\n\t\t1.In spring.\n\t\t2.At the beginning of summer(this is only for Grant based admission).\n\t\t3.At the middle of summer.\n\t\tExamination subjects can be changed each year, so we advice to check it in web site https://inha.uz/ \n\t\tP.S You have to have IELTS certificate at least 5.0 for SOCIE and 5.5 for SBL and SOL faculties.   " << endl;
	cout << "\t ----------------------------------------------------------------------------------------------" << endl;
}

/*void building()
{

}

void professors()
{

}

void staff()
{

}
*/
int main()
{
	university system;
	system.menu();

	
	return 0;
}