#include <iostream>
#include <iomanip>
using namespace std;

// This program will input American money and convert it to foreign currency

// Jeremy Leung

const double dollarToEuros = 1.06;
const double dollarToPesos = 9.73;
const double dollarToYen = 124.35;

// Prototypes of the functions
void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);

int main()
{
	float dollars;
	float euros;
	float pesos;
	float yen;

	cout << fixed << showpoint << setprecision(2);

	cout << "Please input the amount of American Dollars you want converted "
		 << "to euros and pesos" << endl;
	cin >> dollars;

	// Fill in the code to call convertMulti with parameters dollars, euros, and pesos
	convertMulti(dollars, euros, pesos);

	// Fill in the code to output the value of those dollars converted to both euros
	// and pesos
	cout << "$" << dollars << " is converted to " << euros << " euros and " << pesos << " pesos"
         << endl << endl;

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to euros, pesos and yen" << endl;
	cin >> dollars;

	// Fill in the code to call convertMulti with parameters dollars, euros, pesos and yen
	convertMulti(dollars, euros, pesos, yen);

	// Fill in the code to output the value of those dollars converted to euros,
	// pesos and yen
	cout << "$" << dollars << " is converted to " << euros << ", " << pesos << " pesos"
         << " and " << yen << " yen" << endl;

	cout << "\nPlease input the amount of American Dollars you want converted\n";
	cout << "to yen" << endl;
	cin >> dollars;

	// Fill in the code to call convertToYen
	yen = convertToYen(dollars);

	// Fill in the code to output the value of those dollars converted to yen
	cout << "$" << dollars << " is converted to " << yen << " yen" << endl << endl;

	cout << "Please input the amount of American Dollars you want converted to euros" << endl;
	cin >> dollars;

	// Fill in the code to call convert ToEuros
	euros = convertToEuros(dollars);

	// Fill in the code to output the value of those dollars converted to euros
	cout << "$" << dollars << " is converted to " << euros << " yen" << endl;

	cout << "\nPlease input the amount of American Dollars you want converted to pesos " << endl;
	cin >> dollars;

	// Fill in the code to call convertToPesos
	pesos = convertToPesos(dollars);

	// Fill in the code to output the value of those dollars converted to pesos
	cout << "$" << dollars << " is converted to " << pesos << " yen" << endl;

	return 0;
}

// All of the functions are stubs that just serve to test the functions
// Replace with code that will cause the functions to execute properly

//	**************************************************************************
//	convertMulti
//
//	task:	  This function takes a dollar value and converts it to euros
//	          and pesos
//	data in:  dollars
//	data out: euros and pesos
//
//	*************************************************************************

void convertMulti(float dollars, float& euros, float& pesos)
{
    //convert dollars to Euros
	euros = dollars * dollarToEuros;

	//convert dollars to Pesos
	pesos = dollars * dollarToPesos;

}

//	************************************************************************
//	convertMulti
//
//	task:	  This function takes a dollar value and converts it to euros
//	          pesos and yen
//	data in:  dollars
//	data out: euros pesos yen
//
//	***********************************************************************

void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
	 //convert dollars to Euros
	euros = dollars * dollarToEuros;

	//convert dollars to Pesos
	pesos = dollars * dollarToPesos;

	 //convert dollars to Yen
	yen = dollars * dollarToYen;
}

//	****************************************************************************
//	convertToYen
//
//	task:	       This function takes a dollar value and converts it to yen
//	data in:	   dollars
//	data returned: yen
//
//	***************************************************************************

float convertToYen(float dollars)
{
    return dollars * dollarToYen;
}
	//	****************************************************************************
//	convertToEuros
//
//	task:	       This function takes a dollar value and converts it to euros
//	data in:	   dollars
//	data returned: euros
//
//	****************************************************************************

float convertToEuros(float dollars)
{
	return dollars * dollarToEuros;
}

//	*****************************************************************************
//	convertToPesos
//
//	task:	       This function takes a dollar value and converts it to pesos
//	data in:	   dollars
//	data returned: pesos
//
//	****************************************************************************

float convertToPesos(float dollars)
{
	return dollars * dollarToPesos;
}
/*
Please input the amount of American Dollars you want converted
to euros and pesos
42
Please input the amount of American Dollars you want converted
to euros, pesos and yen
52
Please input the amount of American Dollars you want converted
to yen
89
Please input the amount of American Dollars you want converted
to euros
78
Please input the amount of American Dollars you want converted
to pesos
86
----------------------------------------------------------------------------------------------
Please input the amount of American Dollars you want converted to euros and pesos
9.35
$9.35 is converted to 9.91 euros and 90.98 pesos

Please input the amount of American Dollars you want converted
to euros, pesos and yen
10.67
$10.67 is converted to 11.31, 103.82 pesos and 1326.81 yen

Please input the amount of American Dollars you want converted
to yen
12.78
$12.78 is converted to 1589.19 yen

Please input the amount of American Dollars you want converted to euros
2.45
$2.45 is converted to 2.60 yen

Please input the amount of American Dollars you want converted to pesos
8.75
$8.75 is converted to 85.14 yen
*/
