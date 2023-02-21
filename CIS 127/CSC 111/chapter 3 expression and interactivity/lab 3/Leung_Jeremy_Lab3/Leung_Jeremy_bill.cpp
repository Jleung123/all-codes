// This program will read in the quantity of a particular item and its price.
// It will then print out the total price.
// The input will come from the keyboard and the output will go to
// the screen.

// Jeremy Leung

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int	quantity;		// contains the amount of items purchased
	float itemPrice;	// contains the price of each item
	float totalBill;	// contains the total bill.
	string name;        // contains the name of the item

	cout << setprecision(2) << fixed << showpoint;	// formatted output

    // get the name on the item
	cout << "Please input the name of the item" << endl;
	getline(cin, name);

    // get number of items bought
	cout << "Please input the number of items bought" << endl;
	cin >> quantity;

    //get the price of the item
	cout << "Please input the price of each item" << endl;
    cin >> itemPrice;

    // calculate the total
    totalBill = itemPrice * quantity;

    // output the results
    cout << "The item you bought is " << name << endl;
    cout << "The total bill is $" << totalBill << endl;

	return 0;
}
/*
    Please input the number of items bought
    22
    Please input the price of each item
    10.89
    The total bill is $239.58

    Please input the number of items bought
    22
    Please input the price of each item
    10.89
    The total bill is $2.4e+002

    Please input the number of items bought
    22
    Please input the price of each item
    10.89
    The total bill is $239.5800

    Please input the name of the item
    Milk
    Please input the number of items bought
    4
    Please input the price of each item
    1.97
    The item you bought is Milk
    The total bill is $7.88

    Please input the name of the item
    Chocolate Ice Cream
    Please input the number of items bought
    4
    Please input the price of each item
    1.97
    The item you bought is Chocolate Ice Cream
    The total bill is $7.88
*/
