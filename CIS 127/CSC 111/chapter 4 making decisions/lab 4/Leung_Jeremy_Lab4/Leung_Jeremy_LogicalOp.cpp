// This program illustrates the use of logical operators

// Jeremy Leung

#include <iostream>
using namespace std;

int main()
{
	char year;
	float gpa;

	cout << "What year student are you ?" << endl;
	cout << "Enter 1 (freshman), 2 (sophomore), 3 (junior), or 4 (senior)"
	<< endl << endl;
	cin >> year;

	cout << "Now enter your GPA" << endl;
	cin >> gpa;

	if (gpa >= 2.0 || year == '4')
		cout << "It is time to graduate soon" << endl;

	else if ( year != '4'&& gpa < 2.0)
		cout << "You need more schooling" << endl;

	return 0;
}
/*
you could rewrite the expression as !(gpa <= 2.0) this condition will test if goa is less
then or equal to 2.0, if false the not operator will turn this condition to true, i.e.
not(false) = true
-------------------------------------------------------------
yes you could, both != and <= are testing the same condition,
"if the year is anything but 4"
-------------------------------------------------------------
any students with a gpa great or equal to 2.0 or is in their 4th year can graduate
yes this tests all combinations but logically it does not make sense
-------------------------------------------------------------
Yes, since this program is only testing if you meet the requirements to graduate
anything that doesn't meet those requirements should result in "you need more schooling"
*/
