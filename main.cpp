#include <iostream>
#include <ctime>
using namespace std;

void funage(int &year, int &month, int&day);
void currectDate(int &year, int &month, int&day);
void incorrectDate(int &year, int &month, int&day);

int main() 
{
	char heart_char = 3;
	
	int year, month, day, choice;
	
	cout << "Enter your Year of birth   : ";
	cin >> year; 

	cout << "Enter your Month of birth  : ";
	cin >> month;

	cout << "Enter your Day of the birth: ";
	cin >> day;

	funage(year, month, day);

	cout << "\n----------------------------------------------";
	cout << "\n| Your age is| " << year << " Years | " << month << " Months | " << day << " Days |\n";
	cout << "----------------------------------------------\n\n";
	
	cout << "\t\t"<<"Welcome to visit" << heart_char << "\n\nQays Mms" << heart_char << "\n\n";


	cout<<

	system("pause");
}

void funage(int &year, int &month, int &day) 
{
	int choice;

	cout << "\nIf the time on your computer is incorrect please enter 0 else enter 1: ";
	cin >> choice;
	
	if(choice==1)
		currectDate(year,month,day);
	else
		incorrectDate(year,month,day);
}

void currectDate(int &year, int &month, int&day)
{
	time_t t = time(0); // get time now
    struct tm * now = localtime( & t );

	int Birth_date, The_current_date;

	Birth_date =((now->tm_year + 1900) * 12 * 30) + ((now->tm_mon + 1) * 30) + now->tm_mday;
	
	The_current_date = (year * 12 * 30) + (month * 30) + day;

	Birth_date= Birth_date - The_current_date ;

	year = Birth_date / 360;

	month = (Birth_date % 360) / 30;

	day = (Birth_date % 360) % 30;
}

void incorrectDate(int &year, int &month, int&day)
{
	int The_current_year,The_current_month, The_current_day, Birth_date, The_current_date;

	cout << "\nEnter current year  : ";
	cin >> The_current_year;

	cout << "Enter current month : ";
	cin >>The_current_month;

	cout << "Enter current day   : ";
	cin >>The_current_day;

	Birth_date = (The_current_year * 12 * 30) + (The_current_month * 30) + The_current_day;

	The_current_date = (year * 12 * 30) + (month * 30) + day;
	
	Birth_date = Birth_date - The_current_date;

	year = Birth_date / 360;

	month = ( Birth_date % 360) / 30;

	day = (Birth_date % 360) % 30;
}
