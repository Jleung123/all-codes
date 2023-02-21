// This program finds the average time spent programming by a student
// each day over a three day period.

// Jeremy Leung

#include <iostream>
using namespace std;

int main()
{
	int numStudents, n;
	float numHours, total, average, average2, study;
	int student, day = 0;	// these are the counters for the loops

	cout << "This program will find the average number of hours a day"
		 << " that a student spent programming over a long weekend\n\n";
	cout << "How many students are there?" << endl;
	cin >> numStudents;

	cout << "Enter the number of days in the long weekend" << endl;
	cin >> n;

	for (student = 1; student <= numStudents; student++)
	{
		total = 0;

		for (day = 1; day <= n; day++)
		{
			cout << "Please enter the number of hours worked by student "
				 << student << " on day " << day << "." << endl;
			cin >> numHours;

			total = total + numHours;
		}

		for (day = 1; day <= n; day++)
		{
			cout << "Please enter the number of housed studied by student "
				 << student << " on day " << day << "." << endl;
			cin >> study;

			study += numHours;
		}

		average = total / n;
		average2 = study / n;

		if (average > average2)
        {
            cout << "Student " << student <<
            " spent more hours working on average" << endl;
            cout << "The average number of hours per day spent programming by "
			 << "student " << student << " is " << average << endl;
        }
        else if (average == average2)
        {
            cout << "Student " << student <<
            " spent equal hours working and working on average" << endl;
            cout << "The average number of hours per day spent programming and studying by "
            << "student " << student << " is " << average << endl;
        }
        else
        {
            cout << "Student " << student <<
            " spent more hours studying on average" << endl;
            cout << "The average number of hours per day spent studying by "
			 << "student " << student << " is " << average << endl;
        }
	}

	return 0;
}
/*
This program will find the average number of hours a day that a student spent programming over a long weekend

How many students are there?
2
Enter the number of days in the long weekend
2
Please enter the number of hours worked by student 1 on day 1.
4
Please enter the number of hours worked by student 1 on day 2.
6
The average number of hours per day spent programming by student 1 is 5
Please enter the number of hours worked by student 2 on day 1.
9
Please enter the number of hours worked by student 2 on day 2.
13
The average number of hours per day spent programming by student 2 is 11

----------------------------------------------------------------------------------------

This program will find the average number of hours a day that a student spent programming over a long weekend

How many students are there?
2
Enter the number of days in the long weekend
2
Please enter the number of hours worked by student 1 on day 1.
4
Please enter the number of hours worked by student 1 on day 2.
6
Please enter the number of housed studied by student 1 on day 1.
7
Please enter the number of housed studied by student 1 on day 2.
9
Student 1 spent more hours studying on average
The average number of hours per day spent studying by student 1 is 5
Please enter the number of hours worked by student 2 on day 1.
4
Please enter the number of hours worked by student 2 on day 2.
6
Please enter the number of housed studied by student 2 on day 1.
1
Please enter the number of housed studied by student 2 on day 2.
3
Student 2 spent more hours working on average
The average number of hours per day spent programming by student 2 is 5
*/
