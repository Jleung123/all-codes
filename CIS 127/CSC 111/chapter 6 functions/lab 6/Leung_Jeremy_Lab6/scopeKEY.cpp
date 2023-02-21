#include <iostream>
#include <iomanip>
using namespace std;

// This program will demonstrate the scope rules.

// Jeremy Leung

const double PI = 3.14;
const double RATE = 0.25;

void findArea(float, float&);
void findCircumference(float, float&);

int main()
{
	cout << fixed << showpoint << setprecision(2);
	float radius = 12;

	cout << "Main function outer block" << endl;
	cout << "Main, Radius, PI, Rate are active here" << endl << endl;

	{
		float area;

		cout << "Main function first inner block" << endl;
		cout << "Main, Radius, area, PI, Rate, findRate, findCircumference are active here" << endl << endl;

		// Fill in the code to call findArea here
		findArea(radius, area);

		cout << "The radius = " << radius << endl;
		cout << "The area = " << area << endl << endl;
	}

	{
		float radius = 10;
		float circumference;

		cout << "Main function second inner block" << endl;
		cout << "Main, Radius = 12, Radius = 10, area, PI, Rate, findRate, findCircumference are active here" << endl << endl;

		// Fill in the code to call findCircumference here
		findCircumference(radius, circumference);

		cout << "The radius = " << radius << endl;
		cout << "The circumference = " << circumference << endl << endl;
	}

	cout << "Main function after all the calls" << endl;
	cout << "Main, Radius, PI, Rate, findRate, findCircumference are active here" << endl << endl;

	return 0;
}

//	*********************************************************************
//	findArea
//
//	task:	  This function finds the area of a circle given its radius
//	data in:  radius of a circle
//	data out: answer (which alters the corresponding actual parameter)
//
//	********************************************************************

void findArea(float rad, float& answer)
{
	cout << "AREA FUNCTION" << endl << endl;
	cout << "findRate, rad, answer, Pi, RATE are active here" << endl << endl;

	// FILL in the code, given that parameter rad contains the radius, that
	// will find the area to be stored in answer
	answer = PI * (rad * rad);
}

//	******************************************************************************
//	findCircumference
//
//	task:	  This function finds the circumference of a circle given its radius
//	data in:  radius of a circle
//	data out: distance (which alters the corresponding actual parameter)
//
//	*****************************************************************************

void findCircumference(float length, float& distance)
{
	cout << "CIRCUMFERENCE FUNCTION" << endl << endl;
	cout << "findCircumference, rad, answer, Pi, RATE are active here" << endl << endl;

	// FILL in the code, given that parameter length contains the radius,
	// that will find the circumference to be stored in distance
	distance = 2 * PI * length;
}
/*
exercise 1.
GLOBAL                  Main              Main               Main          Area       Circumference
                 |                 |    (inner 1)    |     (inner 2)   |           |
Main             |Main             |Main             |Main             |findArea   |findCircumference
findArea         |Radius           |Radius           |Radius = 12      |rad        |length
findCircumference|PI               |area             |Radius = 10      |answer     |distance
PI               |Rate             |Pi               |circumference    |PI         |PO
RATE             |findArea         |RATE             |PI               |RATE       |RATE
                 |findCircumference|findArea         |RATE             |           |
                 |                 |findCircumference|findArea         |           |
                 |                 |                 |findCircumference|
-----------------------------------------------------------------------------------------------------
Main function outer block
Main, Radius, PI, Rate are active here

Main function first inner block
Main, Radius, area, PI, Rate, findRate, findCircumference are active here

AREA FUNCTION

findRate, rad, answer, Pi, RATE are active here

The radius = 12.00
The area = 452.16

Main function second inner block
Main, Radius = 12, Radius = 10, area, PI, Rate, findRate, findCircumference are active here

CIRCUMFERENCE FUNCTION

findCircumference, rad, answer, Pi, RATE are active here

The radius = 10.00
The circumference = 62.80

Main function after all the calls
Main, Radius, PI, Rate, findRate, findCircumference are active here
*/
