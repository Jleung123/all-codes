/*
This program will calculate the speed mile per hour from the miles and time traveled
*/

// Jeremy Leung

#include <iostream>
#include <iomanip>
using namespace std;

//function declarations
void milesPerHour(float, float, float&);

int main()
{
    //declare variables
	float miles, time, speed;

	//set the decimal precision by 2
	cout << setprecision(2) << fixed;

	//get the input for miles traveled
	cout << "Please input the miles traveled" << endl;
	cin >> miles;

	//get the input for the time traveled
	cout << "Please input the hours traveled" << endl;
	cin >> time;

	// call the function milesPerHour, by pass in the inputs miles/time with speed as a reference
	milesPerHour(miles, time, speed);

	//output the result
	cout << "your speed is " << speed << " miles per hour" << endl;

	return 0;
}

//function to get the miles per hour
void milesPerHour(float miles, float time, float &speed)
{
	//calculate the speed
	speed = miles / time;
}
/*
Please input the miles traveled
475
Please input the hours traveled
8
your speed is 59.38 miles per hour
*/
