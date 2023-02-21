// This program will read in prices and store them into a two-dimensional array.
// It will print those prices in a table form.

// Jeremy Leung

#include <iostream>
#include <iomanip>
using namespace std;

const int MAXROWS = 10;
const int MAXCOLS = 10;

typedef float PriceType[MAXROWS][MAXCOLS];	// creates a new data type
											// of a 2D array of floats

void getPrices(PriceType, int&, int&);		// gets the prices into the array
void printPrices(PriceType, int, int);		// prints data as a table
float findHighestPrice(PriceType, int, int);
float findLowestPrice(PriceType, int, int);

int main()
{
	int rowsUsed;			// holds the number of rows used
	int colsUsed;			// holds the number of columns used
	PriceType priceTable;	// a 2D array holding the prices

	getPrices(priceTable, rowsUsed, colsUsed);		// calls getPrices to fill the array
	printPrices(priceTable, rowsUsed, colsUsed);	// calls printPrices to display array

	cout << "\nThe highest price = " << findHighestPrice(priceTable, rowsUsed, colsUsed);
	cout << "\nThe lowest price = " << findLowestPrice(priceTable, rowsUsed, colsUsed);

	return 0;
}

//*******************************************************************************
//	getPrices
//
//	task:	  This procedure asks the user to input the number of rows and
//	          columns. It then asks the user to input (rows * columns) number of
//	          prices. The data is placed in the array.
//	data in:  none
//	data out: an array filled with numbers and the number of rows
//	          and columns used.
//
//*******************************************************************************

void getPrices(PriceType table, int& numOfRows, int& numOfCols)
{
	cout << "Please input the number of rows from 1 to " << MAXROWS << endl;
	cin >> numOfRows;

	cout << "Please input the number of columns from 1 to " << MAXCOLS << endl;
	cin >> numOfCols;

	for (int row = 0; row < numOfRows; row++)
	{
		for (int col = 0; col < numOfCols; col++)
		{
			// Fill in the code to read and store the next value in the array
			cout << "Please input the";
			if (col == 0) cout << " year" << endl;
			else cout << " sales for quarter " << col << endl;
			cin >> table[row][col];
		}
	}
}

//***************************************************************************
//	printPrices
//
//	task:	  This procedure prints the table of prices
//	data in:  an array of floating point numbers and the number of rows
//	          and columns used.
//	data out: none
//
//****************************************************************************

void printPrices(PriceType table, int numOfRows, int numOfCols)
{
	//cout << fixed << showpoint << setprecision(2);

	cout << "YEAR\t\tQuarter 1\tQuarter 2\tQuarter 3\tQuarter 4" << endl;

	for (int row = 0; row < numOfRows; row++)
	{
		for (int col = 0; col < numOfCols; col++)
		{
			// Fill in the code to print the table
			cout << table[row][col] << "\t\t" << " \n"[col == numOfCols - 1];
		}
	}
}

float findHighestPrice(PriceType table, int numOfRows, int numOfCols)
// This function returns the highest price in the array
{
    float highestPrice;
    highestPrice = table[0][0]; // make first element the highest price
    for (int row = 0; row < numOfRows; row++)
    {
        for (int col = 0; col < numOfCols; col++)
        if ( highestPrice < table[row][col] )
        highestPrice = table[row][col];
    }

    return highestPrice;
}

float findLowestPrice(PriceType table, int numOfRows, int numOfCols)
// This function returns the highest price in the array
{
    float highestPrice;
    highestPrice = table[0][0]; // make first element the highest price
    for (int row = 0; row < numOfRows; row++)
    {
        for (int col = 0; col < numOfCols; col++)
        if ( highestPrice > table[row][col] )
        highestPrice = table[row][col];
    }

    return highestPrice;
}
/*
Please input the number of rows from 1 to 10
2
Please input the number of columns from 1 to 10
3
Please input the price of an item with 2 decimal places
1.45
Please input the price of an item with 2 decimal places
2.56
Please input the price of an item with 2 decimal places
12.98
Please input the price of an item with 2 decimal places
37.86
Please input the price of an item with 2 decimal places
102.35
Please input the price of an item with 2 decimal places
37.89
1.45     2.56    12.98
37.86    102.35  37.89
---------------------------------------------------------------------------------------
The reason why numOfRows and numOfCols are passed as a reference to the fist function is
because those variables haven't been initialized yet. if those variables were not updated,
the second function would not be able to use them properly.
---------------------------------------------------------------------------------------
Please input the number of rows from 1 to 10
2
Please input the number of columns from 1 to 10
3
Please input the price of an item with 2 decimal places
1.45
Please input the price of an item with 2 decimal places
2.56
Please input the price of an item with 2 decimal places
12.98
Please input the price of an item with 2 decimal places
37.86
Please input the price of an item with 2 decimal places
102.34
Please input the price of an item with 2 decimal places
37.89
1.45     2.56    12.98
37.86    102.34  37.89
---------------------------------------------------------------------------------------
The highest price = 102.34
The lowest price = 1.45

Please input the number of rows from 1 to 10
3
Please input the number of columns from 1 to 10
5
Please input the sales year
2000
Please input the sales quarter 1
72
Please input the sales quarter 2
80
Please input the sales quarter 3
60
Please input the sales quarter 4
100
Please input the sales year
2001
Please input the sales quarter 1
82
Please input the sales quarter 2
90
Please input the sales quarter 3
43
Please input the sales quarter 4
98
Please input the sales year
2002
Please input the sales quarter 1
64
Please input the sales quarter 2
78
Please input the sales quarter 3
58
Please input the sales quarter 4
84
YEAR            Quarter 1       Quarter 2       Quarter 3       Quarter 4
2000             72              80              60              100
2001             82              90              43              98
2002             64              78              58              84
*/
