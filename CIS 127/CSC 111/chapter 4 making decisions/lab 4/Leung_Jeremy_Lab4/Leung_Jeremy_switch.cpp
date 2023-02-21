// This program illustrates the use of the switch statement.

// Jeremy Leung

#include <iostream>
using namespace std;

int main()
{
	char grade;

	cout << "What grade did you earn in Programming I ?" << endl;
	cin >> grade;

	switch (grade)	// this switch statement test if you passed or failed
	{
        case 'A':
        case 'B':
        case 'C':
        case 'D':
		    cout << "YOU PASSED!" << endl;
            break;
		default: cout << "YOU FAILED!" << endl;
	}

    if ( grade == 'A')
        cout << "an A - excellent work!" << endl;
    else if ( grade == 'B')
        cout << "you got a B - good job" << endl;
    else if ( grade == 'C')
        cout << "earning a C is satisfactory" << endl;
    else if ( grade == 'D')
        cout << "while D is passing, there is a problem" << endl;
    else if ( grade == 'F')
        cout << "you failed - better luck next time" << endl;
    else
        cout << "You did not enter an A, B, C, D, or F" << endl;

	return 0;
}
/*
What grade did you earn in Programming I ?
D
YOU PASSED!
an A - excellent work!
-------------------------------------------------
What grade did you earn in Programming I ?
C
YOU PASSED!
earning a C is satisfactory
*/
