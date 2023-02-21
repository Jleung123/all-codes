// This program will output the circumference and area
// of the circle with a given radius.

// Jeremy Leung

#include <iostream>
#include <math.h>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main()
{
	float area; // definition of area of circle
	float circumference; // definition of circumference
	circumference = 2 * PI * RADIUS; // computes circumference
	area = (PI * pow(RADIUS, 2)); // computes area

    //output the results
	cout << "The circumference of the circle is: " << circumference << endl;

    cout << "The area of the circle is: " << area ;
	return 0;
}
