// This program has the user input a number n and then finds the
// mean of the first n positive integers

// PLACE YOUR NAME HERE

#include <iostream>
using namespace std;

int main()
{
	int value, value2, i = 0;		// value is some positive number n
	int total = 0;	// total holds the sum of the first n positive numbers
	int number;		// the amount of numbers
	float mean;		// the average of the first n positive numbers

	cout << "Please enter a starting positive integer" << endl;
	cin >> value;

	cout << "Please enter a ending positive integer" << endl;
	cin >> value2;

	if (value > 0)
	{
		for (number = value; number <= value2; number++)
		{
			total = total + number;
			i ++;
		}	// curly braces are optional since there is only one statement

		mean = static_cast<float>(total) / i;	// note the use of the typecast
													// operator here
		cout << "The mean average of the first " << value
			 << " positive integers is " << mean << endl;
	}

	else
		cout << "Invalid input - integer must be positive" << endl;

	return 0;
}
/*
Please enter a positive integer
4
The mean average of the first 4 positive integers is 2.5

Please enter a positive integer
5
The mean average of the first 5 positive integers is 3

if you remove the static_cast<float>(total) the program will not only be able to work
preperly with integer values
------------------------------------------------------------------
Please enter a positive integer
2.99
The mean average of the first 2 positive integers is 1

the program rounds the input to the nearest integer value

------------------------------------------------------------------------------
Please enter a starting positive integer
3
Please enter a ending positive integer
9
The mean average of the first 3 positive integers is 6
*/
