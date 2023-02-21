// This program prints "You Pass" if a student's average is
// 60 or higher and prints "You Fail" otherwise

// Jeremy Leung

#include <iostream>
using namespace std;

int main()
{
	float average;	// holds the grade average

	cout << "Input your average:" << endl;
	cin >> average;

	if (average > 100)
		cout << "You Pass" << endl;
	else if (average >= 90 &&  average <= 100)
		cout << "You Pass" << endl;
    else if (average >= 80 &&  average <= 99)
		cout << "You Pass" << endl;
    else if (average >= 60 &&  average <= 79)
		cout << "You Pass" << endl;
    else if (average >= 0 &&  average <= 59)
		cout << "You Fail" << endl;

	return 0;
}
/*
Input your average:
80
You Pass

Input your average:
56
You Fail

Input your average:
60
nothing happens if you input 60, because there is no condition to test for that
--------------------------------------------------

Input your average:
-12
same thing as before nothing happens, there is no condition testing for negative inputs

*/
