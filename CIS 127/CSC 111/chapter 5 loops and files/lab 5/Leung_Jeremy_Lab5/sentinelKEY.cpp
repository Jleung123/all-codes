// This program illustrates the use of a sentinel in a while loop.
// The user is asked for monthly rainfall totals until a sentinel
// value of -1 is entered. Then the total rainfall is displayed.

// Jeremy Leung

#include <iostream>
using namespace std;

int main()
{
	// Fill in the code to define and initialize to 1 the variable month
	int month = 1;

	float total = 0, rain;

	cout << "Enter the total rainfall for month " << month << endl;
	cout << "Enter -1 when you are finished" << endl;

	// Fill in the code to read in the value for rain
    cin >> rain;

	// Fill in the code to start a while loop that iterates
	// while rain does not equal -1
	while (rain != -1)
	{
		// Fill in the code to update total by adding it to rain
		total += rain;
		// Fill in the code to increment month by one
		month += 1;

		cout << "Enter the total rainfall in inches for month "
			 << month << endl;
		cout << "Enter -1 when you are finished" << endl;

		// Fill in the code to read in the value for rain
		cin >> rain;
	}

	if (month == 1)
		cout << "No data has been entered" << endl;

	else
		cout << "The total rainfall for the " << month - 1
		     << " months is " << total << " inches." << endl;

	return 0;
}
/*Enter the total rainfall for month 1
Enter -1 when you are finished
12
Enter the total rainfall in inches for month 2
Enter -1 when you are finished
13
Enter the total rainfall in inches for month 3
Enter -1 when you are finished
15
Enter the total rainfall in inches for month 4
Enter -1 when you are finished
-1
The total rainfall for the 3 months is 40 inches.
    ----------------------------------------------------------------------

Enter the total rainfall for month 1
Enter -1 when you are finished
-1
No data has been entered

if you enter -1 first the program exists the loop and the program ends

Enter the total rainfall in inches for month 1
Enter -1 when you are finished
0
Enter the total rainfall in inches for month 2
Enter -1 when you are finished
0-1
Enter the total rainfall in inches for month 3
Enter -1 when you are finished
The total rainfall for the 3 months is 0 inches.

if you keep entering 0 the loop will keep running as long as until the user enters -1
    ----------------------------------------------------------------------
this program will accept all numerical values except -1 since that number is being use as
the escape number
    ----------------------------------------------------------------------
the purpose of the if statement (if (month == 1 ) is to check if the user entered -1 as
the first input
*/
