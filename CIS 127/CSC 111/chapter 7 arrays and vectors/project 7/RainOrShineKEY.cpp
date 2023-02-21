/*
    This Program will ask the user for the name of a file then read the name of that file and
    store the values into a 2D array, then output the results or the amount of rainy days/ cloud day
    and sunny days. And which month had the most rain.
*/

// Jeremy Leung

#include <iostream>
#include <fstream>
using namespace std;

// declare constant variables for the rows and columns in the 2D array
const int ROWS = 3;
const int COLS = 30;

// define a char type array that uses ROWS and COLS as rows and columns
typedef char rainType[ROWS][COLS];

// function that accepts defined array type
void rainyDays(rainType);

int main()
{
    //declare array rain
	rainType rain;

	string filename = "";

	// defines an input stream for a data file
	ifstream dataIn;

	// ask and receive user input for for name of the file
    cout << "Enter the name of the file: " ;
    cin >> filename;

    // whole loop as input validation to make sure the user enters the correct filename
    while (filename != "RainOrShine.txt")
    {
        cout << "Error opening data file\nre-enter the name of the file: " ;
        cin >> filename;
    }

    // open file
    dataIn.open(filename);

	//while loop to read values from RainOrShine as longs as there is still a line to read from
	while (dataIn)
	{
		for (int i = 0; i < ROWS; i++)
		{
		    for (int j = 0; j < COLS; j++)
            // reads values from txt file and assigns them for the 2D array
            dataIn >> rain[i][j];
		}
	}

	// call function to calculate the amount of rainy/ cloudy or sunny days per month
	// passing the rain array and the ROWS and COLS as sizes for the array
	rainyDays(rain);

	return 0;
}

// function to calculate the total rainy/ cloudy or sunny days per month
void rainyDays (rainType array)
{
    //declare variables to count the amount of of rainy/ cloudy or sunny days and their totals
    int rainTotal = 0, cloudTotal = 0, sunTotal = 0, juneRain = 0, julyRain = 0, augRain = 0;

    //display table header
    cout << "    Summer Weather Report" << endl;
    cout << "Month\tRainy\tCloudy\tSunny" << endl;
    cout << "-----------------------------" << endl;

    // for loop to read the values of the 2D array from each row
    for (int i = 0; i < ROWS; i++)
    {
        // reset the counters to 0 after each iteration
        int rainy = 0, cloudy = 0, sunny = 0;

        //inner for loop to count the totals per month
        for (int j = 0; j < COLS; j++)
        {
            //switch statements to count the totals for each category in each row and update the counters
            switch(array[i][j])
            {
                case 'R': rainy++; rainTotal++;
                break;
                case 'C': cloudy++; cloudTotal++;
                break;
                case 'S': sunny++; sunTotal++;
            }
        }

        // switch statement to output the results
        // and set the month of rain to the amount of rain received for that month to the month rain variable
        switch (i)
        {
            case 0: cout << "June\t" << rainy << "\t" << cloudy << "\t" << sunny << endl;
            juneRain = rainy;
            break;
            case 1: cout << "July\t" << rainy << "\t" << cloudy << "\t" << sunny << endl;
            julyRain = rainy;
            break;
            case 2: cout << "August\t" << rainy << "\t" << cloudy << "\t" << sunny << endl;
            augRain = rainy;
            break;
        }
    }

    //display table footer and the totals for each category
    cout << "------------------------------" << endl;
    cout << "Totals\t" << rainTotal << "\t" << cloudTotal << "\t" << sunTotal << endl;

    // if-else-if statement to display which month had the most rain
    if(juneRain > julyRain && juneRain > augRain)
        cout << "June had the most rainy days" << endl;
    else if(julyRain > juneRain && julyRain > augRain)
        cout << "July had the most rainy days" << endl;
    else if(augRain > juneRain && augRain > julyRain)
        cout << "August had the most rainy days" << endl;
}
/*
Enter the name of the file: rainorshine.txt
Error opening data file
re-enter the name of the file: RainOrShine.txt
    Summer Weather Report
Month   Rainy   Cloudy  Sunny
-----------------------------
June    11      8       11
July    11      14      5
August  16      7       7
------------------------------
Totals  38      29      23
August had the most rainy days
*/
