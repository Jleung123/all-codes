// This program takes two values from the user and then swaps them
// before printing the values. The user will be prompted to enter
// both numbers.

// Jeremy Leung

#include <iostream>
using namespace std;

int main()
{
	float firstNumber;
	float secondNumber;

	// Prompt user to enter the first number. 
	cout << "Enter the first number" << endl;
	cout << "Then hit enter" << endl;
	cin >> firstNumber;

	// Prompt user to enter the second number. 
	cout << "Enter the second number" << endl;
	cout << "Then hit enter" << endl;
	cin >> secondNumber;

	// Echo print the input.
	cout << endl << "You input the numbers as " << firstNumber
		 << " and " << secondNumber << endl;

	// Now we will swap the values. 
	firstNumber = secondNumber;
	secondNumber = firstNumber;

	// Output the values.
	cout << "After swapping, the values of the two numbers are "
		 << firstNumber << " and " << secondNumber << endl;

	return 0;
}
/*
clang++-7 -pthread -std=c++17 -o main main.cpp
./main
Enter the first number
Then hit enter
5
Enter the second number
Then hit enter
6

You input the numbers as 5 and 6
After swapping, the values of the two numbers are 6 and 6
*/