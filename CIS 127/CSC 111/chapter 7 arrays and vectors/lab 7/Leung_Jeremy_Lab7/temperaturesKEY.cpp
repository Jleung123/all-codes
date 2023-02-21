/*
this program will calculate the average/highest/ and lowest temperatures entered by the user in a array
*/

// Jeremy Leung

#include <iostream>
#include <iomanip>
using namespace std;

// declares a new data type: an integer array of 100 elements
typedef int TempType[100];

// function to get the inputs to the array
void getTemp(TempType, int);

// function to calculate the average/highest/ and lowest temperature in the array
void calcTemp(TempType, int);

int main()
{
    // declare a variable to as a size for the array
	int size;

	// get the user input for the size of the array
	cout << "Please input the number of temperatures to be read" << endl;
	cin >> size;

	//declare the array with size equal to user input
	TempType temp;

	// call function to get inputs into the array passing the array and the size
	getTemp(temp, size);

	// call function to calculate the average/highest/ and lowest passing the array and the size
	calcTemp(temp, size);

	return 0;
}
/*
function input values into the array
*/
void getTemp(TempType array, int size)
{
    // function to input a value at each position in the array
    for (int i = 0; i < size; i++)
    {
        // insert user input into the current position of the array
        cout << "input temperature " << i + 1 << endl;
        cin >> array[i];
    }
}

// function to calculate the average/ highest and lowest temperature in the array
void calcTemp(TempType array, int size)
{
    // declare variables to hold the values of the average/highest/ and lowest
    // assuming the first value of the array is either the highest or lowest value
    float avg = 0, high = array[0], low = array[0];

    // set decimal precision to 2
    cout << setprecision(2) << fixed << showpoint;

    // for loop to calculate the average of all the values in the array
	for (int i = 0; i < size; i++)
    {
        // add each value int the array to a sum
        avg += array[i];
    }

    // divide the sum by the size of the array to get the average and output the results
    cout << "The average temperature is " << avg / size << endl;

    // for loop to find the highest value in the array
	for (int i = 0; i < size; i++)
    {
        /*
            if statement to check in the variable high is less then the value
            of the current position in the array, if true re-write the value of
            variable high to the new value from the current position in the array
        */
        if (high < array[i])  high = array[i];

        /*
            if statement to check in the variable low is more then the value
            of the current position in the array, if true re-write the value of
            variable low to the new value from the current position in the array
        */
        if (low > array[i])  low = array[i];
    }

    // output the result
    cout << "The highest temperature is " << high << endl;
    cout << "The lowest temperature is " << low << endl;
}
/*
Please input the number of temperatures to be read
5
input temperature 1
68
input temperature 2
75
input temperature 3
36
input temperature 4
91
input temperature 5
84
The average temperature is 70.80
The highest temperature is 91.00
The lowest temperature is 36.00
*/
