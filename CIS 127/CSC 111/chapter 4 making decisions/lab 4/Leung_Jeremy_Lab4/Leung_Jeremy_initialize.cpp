// This program tests whether or not an initialized value
// is equal to a value input by the user

// Jeremy Leung

#include <iostream>
using namespace std;

int main()
{
	int num1, num2;	// initialize both variables

	cout << "Please enter an integer" << endl;
	cin >> num1;
	cout << "Please enter another integer" << endl;
	cin >> num2;

	cout << "num1 = " << num1 << " and num2 = " << num2 << endl;

	if (num1 == num2)
        cout << "The values are the same.\nHey, that’s a coincidence!" << endl;

	if (num1 != num2)
		cout << "The values are not the same" << endl;

	return 0;
}
/*
Please enter an integer
4
num1 = 4 and num2 = 5
Hey, that's a coincidence!

Please enter an integer
7
num1 = 7 and num2 = 5
Hey, that's a coincidence!

Line 19 has a requires 2 "="

Please enter an integer
9
num1 = 9 and num2 = 5
The values are not the same

Please enter an integer
5
num1 = 5 and num2 = 5
Hey, that's a coincidence!
----------------------------------------
Please enter an integer
4
Please enter another integer
5
num1 = 4 and num2 = 5
The values are not the same

Please enter an integer
3
Please enter another integer
3
num1 = 3 and num2 = 3
Hey, that's a coincidence!
---------------------------------------
Please enter an integer
5
Please enter another integer
5
num1 = 5 and num2 = 5
The values are the same.
Hey, that's a coincidence!
*/
