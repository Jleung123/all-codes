// This program will input the value of two sides of a right triangle and then
// determine the size of the hypotenuse.

// Jeremy Leung

#include <iostream>
#include <cmath>	// needed for math functions like sqrt()
#include <iomanip>

using namespace std;

int main()
{
	float a, b;	// the smaller two sides of the triangle
	float hyp;	// the hypotenuse calculated by the program

    // to fix the decimal point on the outputs
	cout << setprecision(2) << fixed << showpoint;

    // get the input values for the triangle sides
	cout << "Please input the value of the two sides" << endl;
	cin >> a >> b;

	// calculations to get the hypotenuse
	hyp = sqrt((pow(a , 2)) + pow(b , 2));

	// output the results
	cout << "The sides of the right triangle are " << a << " and " << b << endl;
	cout << "The hypotenuse is " << hyp << endl;

	return 0;
}
/*
    Please input the value of the two sides
    9 3
    The sides of the right triangle are 9 and 3
    The hypotenuse is 9.48683

    Please input the value of the two sides
    9 3
    The sides of the right triangle are 9.00 and 3.00
    The hypotenuse is 9.49
*/
