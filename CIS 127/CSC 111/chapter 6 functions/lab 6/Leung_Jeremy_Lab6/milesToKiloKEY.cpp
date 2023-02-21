#include <iostream>
#include <iomanip>
using namespace std;

// this program will convert miles to kilometers and kilometers to miles

// Jeremy Leung

//global variables for all functions to use
double miles, kilo;

const double kilometerToMiles = .621;
const double milesToKilometer = 1.61;

//declare functions
void convertToMiles(double);
void convertToKilometers(double);

int main()
{
    //declare variable choice and initialize to 0 to enter the while-loop below
    int choice = 0;

    //set decimal precision to 3 points
	cout << fixed << showpoint << setprecision(3);

	//while too to check if the user entered 3
	while (choice != 3)
    {
        //show the user a menu to choose from and ask for a input
        cout << "1 convert miles to kilometers\n2 Convert kilometers to miles\n3 Quit" << endl;
        cin >> choice;

        switch (choice)
        {
            case 1: cout << "\nPlease input the miles to be converted" << endl;
                    cin >> miles;
                    convertToKilometers(miles);
                    break;
            case 2: cout << "\nPlease input the kilometers to be converted" << endl;
                    cin >> kilo;
                    convertToMiles(kilo);
                    break;
        }
    }

	return 0;
}

//function to convert kilometers to miles
void convertToMiles(double kilo)
{
    //convert to miles
	miles = kilo * kilometerToMiles;

	//output the result
	cout << kilo << " kilometers = " << miles << " miles" << endl << endl;
}

//function to convert miles to kilometers
void convertToKilometers(double miles)
{
	//convert to kilometers
	kilo = miles * milesToKilometer;

	//output the result
	cout << miles << " mile = " << kilo << " kilometers" << endl << endl;
}
/*
1 convert miles to kilometers
2 Convert kilometers to miles
3 Quit
1

Please input the miles to be converted
120
120.000 mile = 193.200 kilometers

1 convert miles to kilometers
2 Convert kilometers to miles
3 Quit
2

Please input the kilometers to be converted
235
235.000 kilometers = 145.935 miles

1 convert miles to kilometers
2 Convert kilometers to miles
3 Quit
3
*/
