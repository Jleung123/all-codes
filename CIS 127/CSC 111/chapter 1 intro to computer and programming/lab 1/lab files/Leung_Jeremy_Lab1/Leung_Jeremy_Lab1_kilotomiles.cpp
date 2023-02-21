/*
this program will take the number of kilometers
travled and convert them to miles, then output
the results

Jeremy Leung
*/

#include <iostream>
using namespace std;

int main()
{
	float kiloTravled;
	float milesTravled;

	// Prompt user to enter the first number. 
	cout << "Enter the number you trabeld in kilometeres" << endl;
	cout << "Then hit enter" << endl;
	cin >> kiloTravled;

	// convert milometers to miles
	milesTravled = kiloTravled * 0.621;

	// Output the the miles travled.
	cout << "You travled " << milesTravled << " miles" << endl;

	return 0;
}
/*
clang++-7 -pthread -std=c++17 -o main main.cpp
./main
Enter the number you trabeld in kilometeres
Then hit enter
400
You travled 248.4 miles
*/