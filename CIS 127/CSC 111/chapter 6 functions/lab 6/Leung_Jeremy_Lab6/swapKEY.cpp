/*
This program will ask the user for 2 values and swap them before outputting the results
*/

// Jeremy Leung

#include <iostream>
#include <iomanip>
using namespace std;

//function declarations
void swapNumbers(float, float);

int main()
{
    //declare variables
	float first, second;

	//get the value for the first number
	cout << "Enter the first Number\nThen hit enter" << endl;
	cin >> first;

	//get the value for the second number
	cout << "Enter the second Number\nThen hit enter" << endl;
	cin >> second;

    //output what the numbers are before they get swapped in the function below
    cout << "you in the numbers as " << first << " and " << second << "." << endl;

	//call swap function
	swapNumbers(first, second);

	return 0;
}

// function to swap the variables
void swapNumbers(float number1, float number2)
{
	//swap function to swap the values of the variables
	swap(number1, number2);

	//output the results
	cout << "After swapping, the first number has the value of "
         << number1
         << " which was the value of the second number\n"
         << "The second number has the value of "
         << number2
         << " which was the value of the first number" << endl;
}

/*
Enter the first Number
Then hit enter
80
Enter the second Number
Then hit enter
70
you in the numbers as 80 and 70.
After swapping, the first number has the value of 70 which was the value of the second number
The second number has the value of 80 which was the value of the first number
*/
