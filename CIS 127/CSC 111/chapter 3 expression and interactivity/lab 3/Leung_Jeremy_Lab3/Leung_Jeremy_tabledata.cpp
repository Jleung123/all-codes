// This program will bring in two prices and two quantities of items
// from the keyboard and print those numbers in a formatted chart.

//P Jeremy Leung

#include <iostream>
#include <iomanip>	// Fill in the code to bring in the library for
                    // formatted output.
using namespace std;

int main()
{
	float price1, price2;		// The price of 2 items
	int	quantity1, quantity2;	// The quantity of 2 items

	cout << setprecision(2) << fixed << showpoint;

	//get the price and quantity for the first item
	cout << "Please input the price and quantity of the first item" << endl;
	cin >> price1 >> quantity1;

	//get the price and quantity for second item
	cout << "Please input the price and quantity of the second item" << endl;
	cin>> price2 >> quantity2;

    //output the results with spaces to make a simple table
	cout << setw(15) << "PRICE" << setw(12) << "QUANTITY\n\n";
	cout << setw(15) << price1 << setw(7) << quantity1 << endl;
	cout << setw(15) << price2 << setw(7) << quantity2 << endl;

	return 0;
}
/*
    Please input the price and quantity of the first item
    1.95 8
    Please input the price and quantity of the second item
    10.89 9
          PRICE  QUANTITY

           1.95      8
          10.89      9
*/
