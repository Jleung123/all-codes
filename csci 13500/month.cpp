#include <iostream>
/*
Author: Jeremy Leung
Course: CSCI-13500
Instructor: Yasmeen Hasan
Assignment: month, Lab1 D

This program display the days in the month from user input taking into account leap years
*/
using namespace std;

int main()
{
	int year, month = 0;//initialize variables

	//get user input
	cout << "Enter year: ";
	cin >> year;
	cout << "Enter month: ";
	cin >> month;

	//nested if statements to check if the user input is a leap year or not first, then which month has been entered to display the days in that month
	if (year % 4 != 0)
	{
	    //nested if statement to check the first 7 months
		if (month <= 7)
		{
		    //special condition to check if the month is february
			if (month == 2)
			{
				cout << "28 days" << endl;
			}
			else if (month % 2 == 0)
			{
				cout << "30 days : " << endl;
			}
			else
			{
				cout << "31 days" << endl;
			}
		}
        //else statement to check the rest of the 5 months in the year
		else
		{
			if (month % 2 == 0)
			{
				cout << "31 days" << endl;
			}
			else
			{
				cout << "30 days" << endl;
			}
		}
	}
	else if (year % 100 != 0)
	{
		//nested if statement to check the first 7 months
		if (month <= 7)
		{
		    //special condition to check if the month is february
			if (month == 2)
			{
				cout << "29 days" << endl;
			}
			else if (month % 2 == 0)
			{
				cout << "30 days : " << endl;
			}
			else
			{
				cout << "31 days" << endl;
			}
		}
        //else statement to check the rest of the 5 months in the year
		else
		{
			if (month % 2 == 0)
			{
				cout << "31 days" << endl;
			}
			else
			{
				cout << "30 days" << endl;
			}
		}
	}
	else if (year % 400 != 0)
	{
		//nested if statement to check the first 7 months
		if (month <= 7)
		{
		    //special condition to check if the month is february
			if (month == 2)
			{
				cout << "28 days" << endl;
			}
			else if (month % 2 == 0)
			{
				cout << "30 days : " << endl;
			}
			else
			{
				cout << "31 days" << endl;
			}
		}
        //else statement to check the rest of the 5 months in the year
		else
		{
			if (month % 2 == 0)
			{
				cout << "31 days" << endl;
			}
			else
			{
				cout << "30 days" << endl;
			}
		}
	}
	else
	{
		//nested if statement to check the first 7 months
		if (month <= 7)
		{
		    //special condition to check if the month is february
			if (month == 2)
			{
				cout << "29 days" << endl;
			}
			else if (month % 2 == 0)
			{
				cout << "30 days : " << endl;
			}
			else
			{
				cout << "31 days" << endl;
			}
		}
        //else statement to check the rest of the 5 months in the year
		else
		{
			if (month % 2 == 0)
			{
				cout << "31 days" << endl;
			}
			else
			{
				cout << "30 days" << endl;
			}
		}
	}
}

