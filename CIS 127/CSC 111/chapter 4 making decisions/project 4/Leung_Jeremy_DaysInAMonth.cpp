// This program will tell you how many days are in each month

// Jeremy Leung

#include <iostream>
using namespace std;

int main()
{
	int month, year;

	cout << "Enter A month (1-12): ";
	cin >> month;

	cout << "Enter a year: ";
	cin >> year;

    switch (month) // switch statement to get the month
    {
        case 1:
            cout<< "31 Days" << endl;
            break;
        case 2:
            if (year % 4 == 0) cout<< "29 Days" << endl; //if condition to test if a leap year
            else cout<< "28 Days" << endl;
            break;
        case 3:
            cout<< "31 Days" << endl;
            break;
        case 4:
            cout<< "30 Days" << endl;
            break;
        case 5:
            cout<< "31 Days" << endl;
            break;
        case 6:
            cout<< "30 Days" << endl;
            break;
        case 7:
            cout<< "31 Days" << endl;
            break;
        case 8:
            cout<< "31 Days" << endl;
            break;
        case 9:
            cout<< "30 Days" << endl;
            break;
        case 10:
            cout<< "31 Days" << endl;
            break;
        case 11:
            cout<< "30 Days" << endl;
            break;
        case 12:
            cout<< "31 Days" << endl;
            break;
        default: cout << "you did not enter a correct month" << endl;
    }
}
/*
Enter A month (1-12): 2
Enter a year: 2008
29 Days

Enter A month (1-12): 2
Enter a year: 2009
28 Days
*/
